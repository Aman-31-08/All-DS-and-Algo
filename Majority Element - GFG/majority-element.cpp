// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // unordered_map<int,int> m;
        // for(int i=0;i<size;i++)
        // {
        //     m[a[i]]++;
        // }
        // for(auto it:m)
        // {
        //     if(it.second>size/2)
        //         return it.first;
        // }
        // return -1;
        int ma=a[0];
        int c=1;
        for(int i=1;i<size;i++)
        {
            if(a[i]==ma)
            {
                c++;
            }
            else c--;
            if(c==0)
            {
                ma=a[i];
                c=1;
            }
        }
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==ma) count++;
        }
        if(count>size/2) return ma;
        return -1;
        
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends