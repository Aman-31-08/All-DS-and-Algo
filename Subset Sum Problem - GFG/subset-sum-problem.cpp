// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int check(vector<int> arr,int n,int sum)
    {
        int dp[n+1][sum+1];
        // if(n==0||sum==0) return 0;
        // if(arr[n-1]>sum) return check(arr,n-1,sum);
        // else return max(arr[n-1]+check(arr,n-1,sum-arr[n-1]),check(arr,n-1,sum));
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
        }
        for(int i=0;i<=sum;i++)
        {
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=max(arr[i-1]+dp[i-1][j-arr[i-1]],dp[i-1][j]);
                }
            }
        }
        return dp[n][sum];
        
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        if(check(arr,arr.size(),sum)==sum) return true;
        return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends