/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(vector<int> &path,vector<vector<int>> &v,TreeNode* root,int ts)
    {
        if(root==NULL) return;
        path.push_back(root->val);
        
        if(!root->left&&!root->right&&ts==root->val)
            v.push_back(path);
        dfs(path,v,root->left,ts-root->val);
        dfs(path,v,root->right,ts-root->val);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector<vector<int>> v;
        dfs(path,v,root,targetSum);
        return v;
    }
};