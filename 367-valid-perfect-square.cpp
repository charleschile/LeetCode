class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 1, right = num, mid, sqrt;
        while (left <= right) {
            mid = left + ((right - left) >> 1);
            sqrt = num / mid;
            if (sqrt > mid) {
                left = mid + 1; 
            } else if (sqrt < mid) {
                right = mid - 1;
            } else if (sqrt == mid) {
                if (sqrt * mid == num) return true;
                else break;
            }
        }
        double res = (double) num / right;
        if (res * res == num) {
            // cout << "right:" << right << "res:" << res << "sqrt: " << sqrt << endl; 
            return true;
        } else {
            // cout << "right:" << right << "res:" << mid << "res: " << sqrt << endl; 
            return false;
        }
    }
};