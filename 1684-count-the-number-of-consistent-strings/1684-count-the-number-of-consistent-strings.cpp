class Solution {
public:
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<int,int> m;
        int c=0;
        for(auto x:allowed)
            m[x]++;
        for(int i=0;i<words.size();i++)
        {
            int j=0;
            for(j;j<words[i].size();j++)
            {
                if(m.find(words[i][j])==m.end())
                {
                    break;
                }
            }
            if(j==words[i].size())
            {
                c++;
            }
        }
        return c;
    }
};