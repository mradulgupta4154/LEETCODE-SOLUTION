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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>vec;
        if(root==NULL) return vec;
        vector<int>leftv=postorderTraversal(root->left);
        vec.insert(vec.end(),leftv.begin(),leftv.end());
        vector<int>rightv=postorderTraversal(root->right);
        vec.insert(vec.end(),rightv.begin(),rightv.end());
        vec.push_back(root->val);
        return vec;

        
    }
};