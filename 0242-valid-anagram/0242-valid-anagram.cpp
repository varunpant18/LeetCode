class Solution {
public:
    bool isAnagram(string s, string t) {
        int i, H[26] = {0};  

        for (i = 0; s[i] != '\0'; i++) {
            H[s[i] - 'a'] += 1;
        }

        for (i = 0; t[i] != '\0'; i++) {
            H[t[i] - 'a'] -= 1;
            if (H[t[i] - 'a'] < 0) {
                return false;
            }
        }

        // Check if all counts are zero
        for (i = 0; i < 26; i++) {
            if (H[i] != 0) {
                return false;
            }
        }

        return true;
    }
};