/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        if(fast==NULL||fast->next==NULL){return false;}
        fast=fast->next->next;
        while(fast!=NULL&&fast->next!=NULL){
            if(fast==slow){
                return true;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        return false;
    }
};