/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans=NULL;
        tree(cloned,target,ans);
        return ans;
    }
    void tree(TreeNode* cloned, TreeNode* target,TreeNode* &ans){
        if(cloned==NULL) return;
        tree(cloned->left,target,ans);
        if(cloned->val==target->val) ans=cloned;
        tree(cloned->right,target,ans);
    }
};