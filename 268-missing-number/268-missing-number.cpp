class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> v;
        // for(int i=0;i<=n;i++)
        //     v.push_back(i);
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]!=v[i])
        //         return v[i];
        // }
        // return v[n];
        int sum = 0;
        int total = nums.size()*(nums.size() + 1)/2;
        for (auto number : nums) { 
            sum += number; 
        }
        return total - sum; 
    
    }
};