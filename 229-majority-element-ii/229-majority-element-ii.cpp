class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> m;
        for(auto x:nums)
            m[x]++;
        for(auto x:m)
            if(x.second>nums.size()/3)
                v.push_back(x.first);
        return v;
    }
};