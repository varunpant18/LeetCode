class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i< s.size(); i += 2 * k) {
            int l = i;
            int m = s.length() - 1;
            int r = min(i + k - 1, m);
            while (l < r)
                swap(s[l++], s[r--]);
        }
        return s;
    }
};