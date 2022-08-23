class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int mini = nums[0] + nums[1] + nums[2];
        
        for(int i=0; i<nums.size(); i++){
            int j = i+1;
            int k = nums.size() - 1;
            
            while(j < k){
                int sum = nums[i]+nums[j]+nums[k];
                int diff = abs(sum - target);
                if(sum == target){
                    return target;
                }
                else if(sum < target){
                    if(abs(mini - target) > abs(sum - target)){
                        mini = sum;
                    }
                    j++;
                }
                else{
                    if(abs(mini - target) > abs(sum - target)){
                        mini = sum;
                    }
                    k--;
                }
            }

        }
         
         return mini;
    }
};