class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i;
    vector<int> b(nums.size());
        b[0]=nums[0];
    for(i=1;i<nums.size();i++){
        b[i]=b[i-1]+nums[i];
    }
    return b;
    }
};