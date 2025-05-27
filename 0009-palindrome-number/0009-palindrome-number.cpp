class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x != 0 && x % 10 == 0) return false;

        int rev_num = 0;
        int temp = x; 

        while (temp > 0) {
            int d = temp % 10;
            if (rev_num > (INT_MAX - d) / 10) return false;
            rev_num = rev_num * 10 + d;
            temp /= 10;
        }

        return rev_num == x;
    }
};
