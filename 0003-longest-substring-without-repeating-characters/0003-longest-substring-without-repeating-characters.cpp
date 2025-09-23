class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int h[256] = {0}; 
        int l = 0, r = 0;
        int maxx = 0;
        int len = 0;

        while (r < s.size()) {
            h[s[r]] += 1;

            if (h[s[r]] == 1) {
                len = r - l + 1;
                maxx = max(len, maxx);
            } else {
                while (h[s[r]] > 1) {
                    h[s[l]] -= 1;
                    l++;
                }
                len = r - l + 1;
                maxx = max(len, maxx);
            }

            r++;
        }

        return maxx;
    }
};