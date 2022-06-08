class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int r=s1.length(),c=s2.length();
        // vector<vector<int>> v(r+1,vector<int> (c+1,0));
        // int i,j;
        // for(i=1;i<=r;i++)
        // {
        //     for(j=1;j<=c;j++)
        //     {
        //         if(s1[i-1]!=s2[j-1])
        //         {
        //             v[i][j]=max(v[i-1][j],v[i][j-1]);
        //         }
        //         else
        //             v[i][j]=v[i-1][j-1]+1;
        //     }
        // }
        // return v[r][c];
        int a[r+1][c+1];
        for(int i=0;i<=r;i++)
        {
            a[i][0]=0;
        }
        for(int i=0;i<=c;i++)
        {
            a[0][i]=0;
        }
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(s1[i-1]==s2[j-1])
                    a[i][j]=1+a[i-1][j-1];
                else
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }
        return a[r][c];
    }
};