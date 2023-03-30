class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int left = 1, right = x, sqrt, mid;
        while (left <= right) {
            mid = left + ((right - left) >> 1);
            sqrt = x / mid;
            if (sqrt < mid) {
                right = mid - 1;
            } else if (sqrt > mid) {
                left = mid + 1;
            } else {
                return mid;
            }
        }
        return right;
    }
};