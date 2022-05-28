class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();i++)
        {
            string s=operations[i];
            if(s=="X++"||s=="++X")
                x++;
            else
                x--;
        }
        return x;
    }
};