// 第一种解法，左闭右闭
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + ((right - left) >> 1); // 注意用位运算，防止溢出，并且加快运算速度
            if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid -1;
            } else {
                // cout << "left:" << left << endl;
                // cout << "right:" << right << endl;
                return mid;
            }
            
        }

        // cout << "left:" << left << endl;
        // cout << "right:" << right << endl;
        return -1;
    }
};

// 第二种解法，左闭右开
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        while (left < right) {
            int mid = (left + right) / 2;
            if (nums[mid] > target) {
                right = mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};
