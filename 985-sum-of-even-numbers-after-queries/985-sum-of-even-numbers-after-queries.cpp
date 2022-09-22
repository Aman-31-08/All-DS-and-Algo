class Solution {
public:
    
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> v;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0) sum+=nums[i];
        }
        for(auto q:queries)
        {
            int val=q[0],pos=q[1];
            if(nums[pos]%2==0) sum-=nums[pos];
            nums[pos]+=val;
            if(nums[pos]%2==0) sum+=nums[pos];
            v.push_back(sum);
        }
        return v;
    }
};