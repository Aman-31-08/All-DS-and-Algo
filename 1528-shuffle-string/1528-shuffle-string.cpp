class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        int k=0;
        vector<char> v(n,0);
      
        for(int i=0;i<n;i++)
        {
            v[indices[i]]=s[i];
        }
        for(int i=0;i<n;i++)
            s[k++]=v[i];
        return s;
    }
};