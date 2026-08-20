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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){head=NULL;delete(head);return NULL;}
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        ListNode* prev=head;
        temp=head;count/=2;
        while(count>0){
            prev=temp;
            temp=temp->next;
            count--;
        }
        prev->next=temp->next;
        temp->next=NULL;
        temp=NULL;
        delete(temp);
        return head;
    }
};