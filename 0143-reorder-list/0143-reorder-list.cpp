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
        vector<int> V;
        ListNode* temp=head;
        while(temp!=NULL){
            V.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int i=0,j=V.size()-1;
        while(i<j&&temp!=NULL){
            temp->val=V[i];
            temp->next->val=V[j];
            temp=temp->next->next;
            i++;j--;
        }
        if(i==j){
            temp->val=V[i];
        }
    }
};