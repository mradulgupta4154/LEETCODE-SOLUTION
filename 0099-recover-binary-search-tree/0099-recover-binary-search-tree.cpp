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
    vector<int>inorder(TreeNode* root){
        vector<int>vec;
        if(root==NULL) return vec;
        vector<int>leftv=inorder(root->left);
        vec.insert(vec.end(),leftv.begin(),leftv.end());
        vec.push_back(root->val);
        vector<int>rightv=inorder(root->right);
        vec.insert(vec.end(),rightv.begin(),rightv.end());
        return vec;
    }
    void insert(TreeNode* root,vector<TreeNode*>&nodes){
        if(root==NULL){
            return;
        }
        insert(root->left,nodes);
        nodes.push_back(root);
        insert(root->right,nodes);
    }
    void recoverTree(TreeNode* root) {
        vector<int>vec=inorder(root);
        sort(vec.begin(),vec.end());
        vector<TreeNode*>nodes;
        insert(root,nodes);
        for(int i=0;i<nodes.size();i++){
           nodes[i]->val=vec[i];
        }
        
    }
};