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
    int getDecimalValue(ListNode* head) {
        int sum= 0;
        ListNode* temp = head;
        int count= 0;
        while(temp!=NULL ){
            count++;
            temp=temp->next;
        }
        for(int i = count-1 ; i>=0;i-- ){
            sum+=pow(2,i)*head->val;
            head=head->next;
        }
        return sum;
        
    }
};