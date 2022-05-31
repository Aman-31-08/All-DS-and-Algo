class Solution {
public:
    string defangIPaddr(string s) {
        string w="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='.'){
            if(s[i+1]!='.')
            {
                w+=s[i];
            }
            else
            {
                w+=s[i];
                w+='[';
                w+='.';
                w+=']';
            }
        }
        }
        return w;
    }
};