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
    void preorder(TreeNode* root,vector<int>&vec){
        if(root==NULL) return;
        vec.push_back(root->val);
        preorder(root->left,vec);
        preorder(root->right,vec);
    }
    bool isUnivalTree(TreeNode* root) {
        vector<int>vec;
        preorder(root,vec);
        bool is=true;
        for(int i=0;i<vec.size()-1;i++){
            if(vec[i]!=vec[i+1]){
                is=false;
                break;
            }
        }
        return is;
        
    }
};