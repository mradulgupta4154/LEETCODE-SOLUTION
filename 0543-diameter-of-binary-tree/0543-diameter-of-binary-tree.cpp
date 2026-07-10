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
    int height(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftt=height(root->left);
        int rightt=height(root->right);
        return max(leftt,rightt)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftd=diameterOfBinaryTree(root->left);
        int rightd=diameterOfBinaryTree(root->right);
        int currD=height(root->left)+height(root->right);
        return max(currD,max(leftd,rightd));
    }
};