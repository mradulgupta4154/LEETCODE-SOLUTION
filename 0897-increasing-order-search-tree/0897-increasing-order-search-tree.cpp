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
    vector<int> inorder(TreeNode* root){
        vector<int>vec;
        if(root==NULL) return vec;
        vector<int>leftv=inorder(root->left);
        vec.insert(vec.end(),leftv.begin(),leftv.end());
        vec.push_back(root->val);
        vector<int>rightv=inorder(root->right);
        vec.insert(vec.end(),rightv.begin(),rightv.end());
        return vec;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>vec=inorder(root);
        TreeNode* dummy=new TreeNode(-1);
        TreeNode* curr= dummy;
        for(int v:vec){
            curr->right=new TreeNode(v);
            curr=curr->right;
        }
        return dummy->right;
        
    }
};