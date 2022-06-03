class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //       //O(n^2)
    // //     int n=nums.size();
    // //     vector<int> v;
    // //     for(int i=0;i<n;i++)
    // //     {
    // //         for(int j=0;j<n;j++)
    // //         {
    // //             if(i!=j&&nums[i]+nums[j]==target)
    // //             {   v.push_back(i);
    // //                 //v.push_back(j);
    // //                 break;
    // //             }
    // //         }
    // //     }
    // //     return v;
    //     unordered_map<int,int> mp;
    //     vector<int> v;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         if(mp.find(target-nums[i])!=mp.end())
    //         {
    //             v.push_back(mp[target-nums[i]]);
    //             v.push_back(i);
    //             return v;
    //         }
    //         else
    //             mp[nums[i]]=i;
    //     }
    //     return v;
        int n=nums.size();
        unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else m[nums[i]]=i;
            
        }
        return v;
    }
};