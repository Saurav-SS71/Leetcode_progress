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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> V;
        ListNode* temp=head;
        int templeft=left,tempright=right;
        while(templeft>1){
            temp=temp->next;
            templeft--;
        }
        while(tempright-left>=0){
            V.push_back(temp->val);
            temp=temp->next;
            tempright--;
        }
        temp=head;
        templeft=left;
        tempright=right;
        while(templeft>1){
            temp=temp->next;
            templeft--;
        }
        int i=0;
        while(tempright-left>=0){
            temp->val=V[V.size()-i-1];
            temp=temp->next;
            tempright--;
            i++;
        }
        return head;
    }
};