/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>vec;
        ListNode* temp=head;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
            
        }
        int maxi=0;
        int n =vec.size()-1;
        for(int i =0;i<vec.size();i++){
            int sum =0;
            sum+=vec[i]+vec[n-i];
            maxi=max(sum,maxi);
        }
        return maxi;


        
    }
};