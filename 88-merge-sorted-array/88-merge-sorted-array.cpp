class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<m;i++)
       {
            
           nums2.push_back(nums1[i]);
            
       }
        nums1.clear();
        for(int i=0;i<m+n;i++)
       {
           nums1.push_back(nums2[i]);
       }
        sort(nums1.begin(),nums1.end());
    }
};