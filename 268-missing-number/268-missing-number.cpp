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
        int sum = 0; // sum of all numbers initially 0
        int total = nums.size()*(nums.size() + 1)/2; // total is the sum of all numbers in the array
        for (auto number : nums) { // iterate through the array
            sum += number; // add the number to the sum
        }
        return total - sum; // return the difference between the sum and the total that is the missing number
    
    }
};