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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* sec =slow->next;
        slow->next=NULL;
        ListNode* prev =NULL;
        while(sec!=NULL){
            ListNode* next =sec->next;
            sec->next=prev;
            prev=sec;
            sec=next;
        }
        ListNode* first =head;
        ListNode* sec1 = prev;
        while(sec1!=NULL){
            ListNode* temp1=first->next;
            ListNode* temp2=sec1->next;
            first->next=sec1;
            sec1->next=temp1;
            first=temp1;
            sec1=temp2;
        }

        
    }
};