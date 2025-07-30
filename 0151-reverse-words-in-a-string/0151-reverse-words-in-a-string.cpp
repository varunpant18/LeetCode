class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Remove leading/trailing/multiple spaces
        string st;
        int i = 0;
        while (i < s.size()) {
            // Skip leading spaces
            while (i < s.size() && s[i] == ' ')
                i++;
            if (i >= s.size())
                break;

            // Add word
            if (!st.empty())
                st += ' ';
            while (i < s.size() && s[i] != ' ')
                st += s[i++];
        }


        int left = 0, right = st.length() - 1;
        while (left < right) {
            swap(st[left++], st[right--]);
        }

        i = 0;
        for (int j = 0; j <= st.size(); j++) {
            if (j == st.size() || st[j] == ' ') {
                reverse(st.begin() + i, st.begin() + j);
                i = j + 1;
            }
        }

        return st;
    }
};