class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        int rev_num = 0;
        while (x > 0) {
            int d = x % 10;
            if (rev_num > (INT_MAX - d) / 10) {
                return false;
            }
            rev_num = rev_num * 10 + d;
            x /= 10;
        }
        return rev_num == original;
    }
};