class Solution {
public:
    string truncateSentence(string s, int k) {
        int c=0;
        string w="";
        for(auto x:s)
        {
            if(x==' ')
                c++;
            if(c==k)
                break;
            w+=x;
        }
        
        return w;
    }
};