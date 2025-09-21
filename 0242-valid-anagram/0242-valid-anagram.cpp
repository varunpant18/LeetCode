class Solution {
public:
    bool isAnagram(string s, string t) {
        int i = 0; int H[26] = {0};

        for (int i = 0; s[i] != '\0'; i++) {
            H[s[i] - 'a'] += 1;
        }

        for (int i = 0; t[i] != '\0'; i++) {
            H[t[i] - 'a'] -= 1;
            if (H[t[i] - 'a'] < 0) {
                return false;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (H[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
