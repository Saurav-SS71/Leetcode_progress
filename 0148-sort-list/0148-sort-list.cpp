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
    ListNode* sortList(ListNode* head) {
        vector<int> V;
        ListNode* temp=head;
        while(temp!=NULL){
            V.push_back(temp->val);
            temp=temp->next;
        }
        sort(V.begin(),V.end());
        ListNode* temp2=head;
        int i=0;
        while(temp2!=NULL){
            temp2->val=V[i++];
            temp2=temp2->next;
        }
        return head;
    }
};