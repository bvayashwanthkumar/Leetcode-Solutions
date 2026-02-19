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
    TreeNode* head=nullptr;

    void tree(TreeNode* root){
        if(root==nullptr)return ;
       TreeNode* left=(root->left);
       TreeNode* right=(root->right);
        if(head==nullptr){
        head=root;
      
        }
        else{
            head->left=nullptr;
            head->right=root;
            head=root;
        }
        tree(left);
        tree(right);
        
    }
    
    void flatten(TreeNode* root) {
        tree(root);
        
        
    }
};