class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        for(int i=1;i<nums.size();i=i+2)
        {
            int x=nums[i-1];
            int y=nums[i];
            while(x>0){
                v.push_back(y);
                x--;
            }
        }
        return v;
    }
};