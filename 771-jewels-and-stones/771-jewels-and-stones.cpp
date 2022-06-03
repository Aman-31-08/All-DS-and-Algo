class Solution {
public:
    int numJewelsInStones(string s1, string s2) {
        int c=0;
        // for(int i=0;i<s1.length();i++)
        // {
        //     for(int j=0;j<s2.length();j++)
        //     {
        //         if(s1[i]==s2[j])
        //             c++;
        //     }
        // }
        unordered_map<char,int> m;
        for(auto it:s2)
            m[it]++;
        for(auto it:s1){
            if(m.count(it)) c+=m[it];
        }
        return c;
    }
};