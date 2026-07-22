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
    void inorder(TreeNode* root, vector<int>&vec){
        if(root==NULL) return;
        inorder(root->left,vec);
        vec.push_back(root->val);
        inorder(root->right,vec);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>vec;
        inorder(root,vec);
        vector<int>result;
        unordered_map<int ,int>m;
        int n =vec.size();
        for(int i=0;i<n;i++){
            m[vec[i]]++;
        }
        int maxcount=0;
        for(auto&[num,count]:m){
            if(count>maxcount){
                maxcount=count;
                result.clear();
                result.push_back(num);
            }else if(count==maxcount){
                result.push_back(num);
            }
        }
        return result;

        
    }
};