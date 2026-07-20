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
    // bool findTarget(TreeNode* root, int k) {
    //     if(root==nullptr)return false;
    //     TreeNode* left=root->left,*right=root->right;
    //     if(left && right){
    //         if(left->val+right->val==k)return true;
    //         else if(left->val + right->val > k)return findTarget(root->left,k);
    //         else return findTarget(root->right,k);
    //     }
    //     return false;
    // }
    void inorder(vector<int> &ans,TreeNode*root){
        if(root==nullptr)return;
        inorder(ans,root->left);
        ans.push_back(root->val);
        inorder(ans,root->right);
    }
  
    bool findTarget(TreeNode* root, int k) {
        
        vector<int> ans;
        inorder(ans,root);

        int left=0,right=ans.size()-1;
    
        while(left<right){
            int r=ans[left]+ans[right];
            if(r==k)return true;
            else if(r>k)right--;
            else left++;
        }
        return false;
    }
};