class Solution {
public:
    int mod=1e9+7;
    int kConcatenationMaxSum(vector<int>& arr, int k) {
//         long sum;
//         long dp=INT_MIN,res=INT_MIN;
//         long n=arr.size();
//         for(int i=0;i<n;i++)
//         {
//             sum+=arr[i];
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]+dp<=arr[i])
//                 dp=arr[i];
//             else dp+=arr[i];
//             res=max(res,dp);
//         }
//         long x=0,y=0,p=0,s=0;
//         for(int i=0,j=n-1;i<n;i++,j--)
//         {
//             x+=arr[i];
//             y+=arr[j];
//             p=max(p,x);
//             s=max(s,y);
            
//         }
//         if(k==1) return res%mod;
//         if(sum>0) return max(res,p+s+(k-2)*sum)%mod;
//         return max(res,p+s)%mod;
        long sum = 0;
        long n = arr.size();
        long dp = INT_MIN, res = INT_MIN;
        for(int i = 0; i < n; i++) {
            sum += arr[i];
        }
        for(int i = 0; i < n; i++) {
            if(dp+arr[i] <= arr[i]) {
                dp = arr[i];
            } else {
                dp += arr[i];
            }
            res = max(res, dp);
        }
        long val1 = 0, val2 = 0;
        long pre = 0, suff = 0;
        for(int i = 0, j = n-1; i < n; i++, j--) {
            val1 += arr[i];
            val2 += arr[j];
            pre = max(pre, val1);
            suff = max(suff, val2);
        }
        if(k == 1) return res%mod;
        if(sum > 0) return max(res, pre+suff+(k-2)*sum)%mod;
        return max(res, pre+suff)%mod;
    }
};