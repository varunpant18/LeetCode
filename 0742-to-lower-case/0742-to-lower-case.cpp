class Solution {
public:
    string toLowerCase(string s) {
        int i;
        for(i = 0; s[i]!='\0'; i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i] += 32;
            }
        }
        return s;
    }
};