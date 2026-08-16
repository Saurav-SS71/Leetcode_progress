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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        int yes=0;

        if(fast==NULL||fast->next==NULL){return NULL;}
        fast=fast->next->next;
        slow=slow->next;
        while(fast!=NULL&&fast->next!=NULL){
            if(slow==fast){yes=1;slow=head;break;}
            fast=fast->next->next;
            slow=slow->next;
        }
        if(slow==fast){return slow;}
        if(yes==1){
            while(true){
                slow=slow->next;fast=fast->next;
                if(slow==fast){return slow;}
            }
        }
        return NULL;
    }
};