class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, end;
        for(end = 0; end < s.size() && s[end]!='\0';end++)
        {}
        end = end - 1;
        int temp = 0;
        for(start = 0; start < end; start++, end--)
        {
            temp = s[start];
            s[start] = s[end];
            s[end] = temp;
        }
    }
};