class Solution {
public:
    int br(string s)
    {
        int n=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
                n++;
        }
        cout<<n+1<<" ";
        return n+1;
        
    }
    int mostWordsFound(vector<string>& v) {
        int maxi=0;
        for(int i=0;i<v.size();i++)
        {
            maxi=max(maxi,br(v[i]));
        }
        return maxi;
    }
};