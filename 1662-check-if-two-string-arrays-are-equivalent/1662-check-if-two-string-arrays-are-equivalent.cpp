class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="",s2="";
        
        for(int k=0;k<word1.size();k++)
            s1+=word1[k];
        for(int k=0;k<word2.size();k++)
            s2+=word2[k];
        // int x=s1.compare(s2);
        // cout<<x;
        // if(x==0) return true;
        // return false;
        if(s1==s2) return true;
        return false;
    }
};