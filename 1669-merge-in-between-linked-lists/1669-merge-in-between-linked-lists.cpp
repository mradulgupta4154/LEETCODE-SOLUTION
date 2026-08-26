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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        for (int i = 0 ; i<a-1 ; i++){
            temp=temp->next;
        }
        ListNode* curr=temp->next;
        for(int j = a ; j<=b ;j++ ){
            ListNode* todel=curr;
            curr=curr->next;
            delete todel;
        }
        temp->next=list2; 
        ListNode* tail= list2;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=curr;
        return list1;
    }
    
};