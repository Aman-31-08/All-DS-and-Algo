class Solution {
public:
    int tribonacci(int n) {
        
        if(n==0) return 0;
        
        else if(n==1) return 1;
        
        else if(n==2) return 1;
        else{
            vector<int> v(n+1,0);
        v[1]=1;
        v[2]=1;
        for(int i=3;i<=n;i++)
        {v[i]=v[i-3]+v[i-2]+v[i-1];
         // cout<<v[0]<<v[1]<<v[2]<<v[i]<<" ";
        }
        return v[n];
        }
        
    }
};