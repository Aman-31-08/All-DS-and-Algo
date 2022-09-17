class Solution {
public:
    int check(string c,string s)
    {
        for(int i=0;i<c.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(c[i]!=s[i]) return 0;
            }
        }
        return 1;
    }
    int countPrefixes(vector<string>& words, string s) {
        int c=0;
        for(int i=0;i<words.size();i++)
        {
            c+=check(words[i],s);
        }
        return c;
    }
};