class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
//         int c=0;
//         for(int i=1;i<nums.size();i++)
//         {
//             if(nums[i]<=nums[i-1])
//                 if(c==1) return false;
//             c++;
//             if(i>1 && nums[i]<=nums[i-2])
//                 nums[i]=nums[i-1];
            
//         }
        int n=nums.size();
        int count = 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i] <= nums[i - 1]) {
                if (count == 1) 
                    return false;
                count++;
                if (i > 1 && nums[i] <= nums[i - 2] )
                    nums[i] = nums[i - 1];
            }
        }
        return true; 
        return true;
    }
};