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
    void postorderTraversal(TreeNode* root,vector<int>&vec) {
        if(root==NULL) return ;
        postorderTraversal(root->left,vec);
        vec.push_back(root->val);
        postorderTraversal(root->right,vec);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>vec1;
        postorderTraversal(root1,vec1);
        vector<int>vec2;
        postorderTraversal(root2,vec2);
        vec1.insert(vec1.end(),vec2.begin(),vec2.end());
        sort(vec1.begin(),vec1.end());
        return vec1;
        
    }
};