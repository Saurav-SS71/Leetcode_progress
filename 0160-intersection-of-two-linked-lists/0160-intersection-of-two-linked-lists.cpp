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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> A,B;
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        while(tempA!=NULL){
            A.push_back(tempA);
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            B.push_back(tempB);
            tempB=tempB->next;
        }
        tempA=headA;
        tempB=headB;
        int count=0;
        for(int i=0; i<A.size();i++){
            count++;
            if(find(B.begin(),B.end(),A[i])!=B.end()){
                int n=0;
                while(n<count-1){
                    tempA=tempA->next;n++;
                }
                return tempA;
            }
        }
        return NULL;
    }
};