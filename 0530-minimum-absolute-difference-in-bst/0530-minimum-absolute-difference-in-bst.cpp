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
    vector<int> preorder(TreeNode*root){
        vector<int>vec;
        if(root==NULL) return vec;
        vector<int>leftv=preorder(root->left);
        vec.insert(vec.end(),leftv.begin(),leftv.end());
        vec.push_back(root->val);
        vector<int>rightv=preorder(root->right);
       
        vec.insert(vec.end(),rightv.begin(),rightv.end());
        return vec;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>vec=preorder(root);
        int mini = INT_MAX;
        for(int i =1;i<vec.size();i++){
            int diff=vec[i]-vec[i-1];
            mini=min(mini,diff);
        }
        return mini;
        
        
    }
};