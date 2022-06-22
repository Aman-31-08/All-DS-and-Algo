// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    vector <int> nFibonacci(int N){
        //code here
        int t1=0,t2=1;
        vector<int>v;
        int t3=t1+t2;
        v.push_back(0);
        v.push_back(1);
       
        
        while(t3<=N)
        {  
            v.push_back(t3);
           t1=t2;
            t2=t3;
             t3=t1+t2;
            
           
        }
        return v;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        vector <int> ans=ob.nFibonacci(N);
        for(int u:ans)
         cout<<u<<" ";
        cout<<"\n"; 
    }
}  // } Driver Code Ends