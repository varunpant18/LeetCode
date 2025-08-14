class Solution {
public:
    char findTheDifference(string s, string t) {
        int h[26] = {0}; 

        for (char c : s) {
            h[c - 'a']++;
        }

        for (char c : t) {
            h[c - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (h[i] != 0) {
                return 'a' + i;
            }
        }

        return 0; 
    }
};