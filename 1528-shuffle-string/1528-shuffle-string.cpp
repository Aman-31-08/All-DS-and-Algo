class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        vector<char> v(n,0);
      
        for(int i=0;i<n;i++)
        {
            v[indices[i]]=s[i];
        }
        for(int i=0;i<n;i++)
            s[i]=v[i];
        return s;
    }
};