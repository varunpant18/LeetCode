class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int H[255]; 
        fill(H, H + 255, -1); 

        int l = 0, r = 0, maxLen = 0;

        while (r < s.size()) {
            if (H[s[r]] != -1 && H[s[r]] >= l) {
                l = H[s[r]] + 1;
            }

            maxLen = max(maxLen, r - l + 1);
            H[s[r]] = r;
            r++;
        }

        return maxLen;
    }
};