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
    bool isPalindrome(ListNode* head) {
        ListNode* prev=NULL;
        for(ListNode*p=head;p!=NULL;p=p->next){
            ListNode * newNode = new ListNode(p->val);
            newNode->next=prev;
            prev=newNode;
        }
        while(head!=NULL){
            if(head->val!=prev->val){
                return false;
            } 
            head=head->next;
            prev=prev->next;
        }
        return true;
        
    }
};