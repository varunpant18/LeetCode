class Solution {
public:
    bool rotateString(string s, string goal) {
        int count = 0;
        while (count < s.size()) {
            char temp = s[0];
            for (int i = 0; i < s.size() - 1; ++i) {
                s[i] = s[i + 1];
            }
            s[s.size() - 1] = temp;

            if (s == goal) {
                return true;
            }
            count++;
        }
        return false;
    }
};