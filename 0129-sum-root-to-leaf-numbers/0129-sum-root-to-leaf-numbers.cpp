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
    string s="";
public:
    int sumNumbers(TreeNode* root) {
        return sumo(root,0);
    }
    int sumo(TreeNode* root,int pathsum){
        if(root==NULL) return 0;
        pathsum=pathsum*10+root->val;
        if(!root->left and !root->right) return pathsum;
        return sumo(root->left,pathsum) +sumo(root->right,pathsum);
    }
    

};