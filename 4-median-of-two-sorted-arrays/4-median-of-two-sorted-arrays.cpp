class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i=0,j=0,k=0;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                v.push_back(nums1[i++]);
            }
            else
                 v.push_back(nums2[j++]);
        }
        while(i<nums1.size())
             v.push_back(nums1[i++]);
        while(j<nums2.size())
             v.push_back(nums2[j++]);
        int n=v.size();
        double d;
        int x=n/2;
        cout<<x;
        if(n%2==1) d=v[x];
        else d=(v[x-1]+v[x])/2.0;
        return d;
    }
};