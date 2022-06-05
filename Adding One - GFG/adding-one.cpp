// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int> addOne(int a[], int n) {
        vector<int> v;
        if(a[n-1]==9)
        {
            int i=n-2;
            a[n-1]=0;
            while(i>=0&&a[i]==9)
            {
                a[i]=0;
                i--;
            }
            if(i<0)
            {
                v.push_back(1);
            }
            else
                a[i]+=1;
        }
        else
        {
            a[n-1]+=1;
        }
        for(int i=0;i<n;i++)
            v.push_back(a[i]);
        return v;
    }
};

// { Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.addOne(a, n);
        printAns(ans);
    }
    return 0;
}  // } Driver Code Ends