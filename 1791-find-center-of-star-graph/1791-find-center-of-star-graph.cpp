class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size()+2;
        
        vector<int> v(n,0);
        for(int i=0;i<edges.size();i++)
        {
            v[edges[i].front()]++;
            v[edges[i].back()]++;
        }
        int max=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>max)
                max=i;
        }
        return max;
    }
};