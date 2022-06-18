class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]<=90 and s[i]>=65)
                s[i]+=32;
        }
        return s;
    }
};