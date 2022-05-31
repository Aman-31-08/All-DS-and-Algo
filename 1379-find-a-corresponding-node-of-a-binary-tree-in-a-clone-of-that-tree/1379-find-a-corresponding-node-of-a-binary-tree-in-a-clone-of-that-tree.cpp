/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *tr=NULL;
    void inorder(TreeNode *root,int x)
    {
        if(root==NULL)
            return;
        inorder(root->left,x);
        if(root->val==x)
            tr=root;
        inorder(root->right,x);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inorder(cloned,target->val);
        return tr;
    }
};