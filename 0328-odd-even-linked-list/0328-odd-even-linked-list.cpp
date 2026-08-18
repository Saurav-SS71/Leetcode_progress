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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> V_odd,V_even;
        int c=1;
        ListNode* temp=head;
        while(temp!=NULL){
            if(c==1){
                V_odd.push_back(temp->val);c=0;
            }
            else if(c==0){
                V_even.push_back(temp->val);c=1;
            }
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(i<V_odd.size()){
            temp->val=V_odd[i];
            temp=temp->next;i++;
        }
        i=0;
        while(i<V_even.size()){
            temp->val=V_even[i];
            temp=temp->next;i++;
        }
        return head;
    }
};