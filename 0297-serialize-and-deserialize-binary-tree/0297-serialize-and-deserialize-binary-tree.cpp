/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==nullptr)return "";
        queue<TreeNode*> q;
        q.push(root);
        string ans="";
        while(q.size()>0){
            TreeNode* node=q.front();
            q.pop();

            if(node){
                ans+=to_string(node->val)+",";
                q.push(node->left);
                q.push(node->right);
            }
            else{
                ans+="null,";
            }
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="")return nullptr;
        vector<string> ans;
        int left=0;
        for(int i=0;i<data.size();i++){
            if(data[i]==','){
                ans.push_back((data.substr(left,i-left)));
                left=i+1;
            }
        }
        queue<TreeNode*>q;
        TreeNode* root=new TreeNode(stoi(ans[0]));
        q.push(root);
        int i=1;
        while(!q.empty() && i< ans.size()){
            TreeNode* node=q.front();
            q.pop();

            if(i < ans.size() && ans[i]!="null"){
                node->left=new TreeNode(stoi(ans[i]));
                q.push(node->left);
            }
            i++;
            if(i < ans.size() && ans[i]!="null"){
                node->right=new TreeNode(stoi(ans[i]));
                q.push(node->right);
            }
            i++;
        }

        return root;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));