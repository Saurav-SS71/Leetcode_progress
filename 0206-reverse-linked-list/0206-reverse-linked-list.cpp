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
        vector<int> V;
        ListNode* temp=head;
        while(temp!=0){
            V.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        for( int i=V.size()-1; i>=0; i--){
            temp->val=V[i];
            temp=temp->next;
        }
        return head;
    }
};