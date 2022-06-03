class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
         int c=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]==nums[j])
        //             c++;
        //     }
        // }
        // return c;
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end()){
                
                c+=m[nums[i]];
                
            }
                
            m[nums[i]]++;
        }
        return c;
    }
};