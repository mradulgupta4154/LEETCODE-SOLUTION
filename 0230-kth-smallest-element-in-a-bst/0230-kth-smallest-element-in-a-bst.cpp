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
    vector<int>vecna(TreeNode* root){
        vector<int>vec;
        if(root==NULL) return vec;
        vector<int>leftV=vecna(root->left);
        vec.insert(vec.end(),leftV.begin(),leftV.end());
        vec.push_back(root->val);
        vector<int>rightV=vecna(root->right);
        vec.insert(vec.end(),rightV.begin(),rightV.end());
        return vec;
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>vec=vecna(root);
        return vec[k-1];      
    }
};