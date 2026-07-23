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
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL) return false;
        queue<TreeNode*>q;
        int level=0;
        q.push(root);
        while(!q.empty()){
            vector<int>vec;
            int size=q.size();
            for(int i =0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                vec.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            if(level%2==0){
                for(int i =0;i<vec.size();i++){
                    if(vec[i]%2==0) return false;
                    if(i>0 and vec[i]<=vec[i-1]) return false;
                }
            }

            else{
                for(int i=0;i<vec.size();i++){
                    if(vec[i]%2!=0) return false;
                    if(i>0 and vec[i]>=vec[i-1]) return false;
                }
            }
            level++;
        }
        return true;
    }
};