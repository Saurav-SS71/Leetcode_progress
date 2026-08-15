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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int N=0;
        ListNode* temp=head;
        if(temp->next==NULL){
            delete(temp);
            return NULL;
        }
        while(temp!=0){
            temp=temp->next;
            N++;
        }
        N=N-n+1;

        if(N==1){
            head=head->next;
            delete(temp);
            return head;
        }

        temp=head;
        ListNode* prev=temp;
        for(int i=0; i<N-1; i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete(temp);
        return head;
    }
};