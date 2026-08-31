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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){return NULL;}
        ListNode* temp=head;
        ListNode* front=head->next;
        while(front!=NULL){
            if(temp->val==front->val){
                while(front!=NULL&&temp->val==front->val){
                    ListNode* del=front;
                    front=front->next;
                    delete(del);
                }
                temp->next=front;
                temp=temp->next;
                if(front!=NULL){
                front=front->next;
                }
            }
            else{
                temp=temp->next;
                front=front->next;
            }
        }
        return head;
    }
};