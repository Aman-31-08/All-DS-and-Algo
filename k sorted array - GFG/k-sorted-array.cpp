// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        vector<pair<int,int>> vp;
       for(int i=0;i<n;i++)
       vp.push_back({arr[i],i});
       sort(vp.begin(),vp.end());
       for(int i=0;i<n;i++)
       {
           if(!(i>=vp[i].second-k && i<=vp[i].second+k))
           return "No";
       }
       return "Yes";
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}  // } Driver Code Ends