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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root==nullptr)return ans;
        q.push(root);
        bool ltr=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>level(size);
            for(int i=0;i<size;i++){
                TreeNode* res=q.front();
                q.pop();
                
                if(res->left)q.push(res->left);
                if(res->right)q.push(res->right);
                int k=ltr ? i : size-i-1;
                level[k]=(res->val);
            }
            //if(j%2==0)reverse(level.begin(),level.end());
            ltr=!ltr;
            ans.push_back(level);
        }
        return ans;
    }
};