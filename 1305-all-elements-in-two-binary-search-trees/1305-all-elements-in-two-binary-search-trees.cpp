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
        vec.push_back(root->val);
        vector<int>rightv=postorderTraversal(root->right);
        vec.insert(vec.end(),rightv.begin(),rightv.end());
        return vec;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>vec1=postorderTraversal(root1);
        vector<int>vec2=postorderTraversal(root2);
        vec1.insert(vec1.end(),vec2.begin(),vec2.end());
        sort(vec1.begin(),vec1.end());
        return vec1;
        
    }
};