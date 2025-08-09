class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        int mapS[256] = {0};  // Mapping from s to t
        int mapT[256] = {0};  // Mapping from t to s

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if (mapS[c1] == 0 && mapT[c2] == 0) {
                mapS[c1] = c2;
                mapT[c2] = c1;
            } else {
                if (mapS[c1] != c2 || mapT[c2] != c1)
                    return false;
            }
        }

        return true;
    }
};