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

    bool isvalidnode(TreeNode* root, long maxs,long mins){
        if(!root)return true;
        if(root->val >= maxs || root->val<=mins)return false;
        return isvalidnode(root->left,root->val,mins) && isvalidnode(root->right,maxs,root->val);
    }
    bool isValidBST(TreeNode* root) {
        return isvalidnode(root,LONG_MAX,LONG_MIN);
    }
};