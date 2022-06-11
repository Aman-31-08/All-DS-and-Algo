class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        int x=0,y=n-1;
        while(x<m&&y>-1)
        {
            int curr=mat[x][y];
            if(curr==target) return true;
            if(curr<target) x++;
            else y--;
        }
        return false;
        
    }
};