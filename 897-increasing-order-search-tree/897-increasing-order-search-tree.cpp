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
    void fun(TreeNode*root,vector<int>&v)
   {if(root==NULL)
       return;
     fun(root->left,v);
     v.push_back(root->val);
     fun(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)
            return NULL;
        vector<int>v;
        fun(root,v);
        
      TreeNode *head=new TreeNode(v[0]);
        TreeNode *curr;
        curr=head;
        int i=0;
        for(i=1;i<v.size();i++)
        {
            TreeNode *temp=new TreeNode(v[i]);
            curr->right=temp;
            curr=temp;
            
        }
        return head;}
    
};