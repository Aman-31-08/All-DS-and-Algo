// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        int n=arr.length();
        int k=26;
        int count[k];
        for(int i=0;i<k;i++)
            count[i]=0;
        for(int i=0;i<n;i++)
        {
            count[arr[i]-97]++;
        }
        for(int i=1;i<k;i++)
        {
            count[i]=count[i-1]+count[i];
        }
        char out[n];
    for(int i=(n-1);i>=0;i--)
       {
           out[count[arr[i] - 97] - 1] = (char)arr[i];
           count[arr[i] - 97]--;
       }
       
       string res = "";
       for(int i=0;i<n;i++)
           res+=out[i];
           
       return res;
   }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends