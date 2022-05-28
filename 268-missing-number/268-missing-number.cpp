class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<=n;i++)
            v.push_back(i);
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=v[i])
                return v[i];
        }
        return v[n];
    }
};