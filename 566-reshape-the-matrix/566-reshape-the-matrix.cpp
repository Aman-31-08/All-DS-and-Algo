class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> v(r,vector<int> (c,0));
        int m=mat.size(),n=mat[0].size();
        //vector<int> t;
        if(m*n==r*c){
            for(int i=0;i<c*r;i++)
               v[i/c][i%c]=mat[i/n][i%n];
            
         return v;
        }
        return mat;
    }
};