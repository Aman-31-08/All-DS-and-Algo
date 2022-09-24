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
    void preordersum(TreeNode* root,int ts,long long sum,int &count)
    {
        if(!root) return;
        if(root->val+sum==ts) count++;
        preordersum(root->left,ts,sum+root->val,count);
        // v.push_back(root->val);
        preordersum(root->right,ts,sum+root->val,count);
        
        // preorder(root->right,);
    }
    void preorder(TreeNode* root,int &ts,int &count)
    {
        if(!root) return;
        preordersum(root,ts,0,count);
        // v.push_back(root->val);
        preorder(root->left,ts,count);
        preorder(root->right,ts,count);
    }
    int pathSum(TreeNode* root, int targetSum) {
        int count=0;
        preorder(root,targetSum,count);
        return count;
    }
};