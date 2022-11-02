class Solution {
public:
    vector<int> reverse(vector<int> v)
    {
        vector<int> c;
        for(int i=v.size()-1;i>=0;i--)
        {
            c.push_back(v[i]);
        }
        return c;
    }
    vector<int> invert(vector<int> v)
    {
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
                v[i]=0;
            else v[i]=1;
        }
        return v;
        // return c;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++)
        {
            image[i]=reverse(image[i]);
            image[i]=invert(image[i]);
        }
        return image;
    }
};