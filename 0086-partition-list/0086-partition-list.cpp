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
    ListNode* partition(ListNode* head, int x) {
        vector<int> V1,V2;
        ListNode* temp=head;
        while(temp){
            if(temp->val<x){
                V1.push_back(temp->val);
            }
            else{
                V2.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(i<V1.size()){
            temp->val=V1[i];
            temp=temp->next;
            i++;
        }
        i=0;
        while(i<V2.size()){
            temp->val=V2[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};