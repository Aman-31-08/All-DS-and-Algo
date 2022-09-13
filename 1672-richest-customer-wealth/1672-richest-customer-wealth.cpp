class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
        int n=accounts[0].size();
        int m=accounts.size();
        for(int i=0;i<m;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=accounts[i][j];
                wealth=max(wealth,sum);
            }
        }
        return wealth;
    }
};