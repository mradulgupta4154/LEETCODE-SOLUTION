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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>vec=inorder(root);
        int sum = 0 ;
        for(int i = 0 ;i<vec.size();i++){
            if(vec[i]>=low and vec[i]<=high){
                sum+=vec[i];
            }
        }
        return sum;
        
    }
};