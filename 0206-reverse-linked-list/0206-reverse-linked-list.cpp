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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){return NULL;}

        if(head->next==NULL){return head;}

        else if(head->next->next==0){// return something to reverse 2 element;
            ListNode* prev=head;
            ListNode* temp=head;
            temp=temp->next;
            temp->next=prev;
            prev->next=NULL;
            head=temp;
        }

        else {
            ListNode* prev=head;
            ListNode* temp=head;
            ListNode* front=head;
            front=front->next->next;
            temp=temp->next;
            prev->next=NULL;
            while(front!=NULL){
            temp->next=prev;
            prev=temp;
            temp=front;
            front=front->next;
            }
            temp->next=prev;
            head=temp;
        }
        
        return head;
    }
};