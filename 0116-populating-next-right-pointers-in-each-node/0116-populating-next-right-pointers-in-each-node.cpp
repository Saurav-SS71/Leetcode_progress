/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        Node* Root=root;
        Node* temp=root;
        while(Root!=NULL){
        while(Root&&Root->left){
            Root->left->next=Root->right;
            if(Root->next!=NULL){
                Root->right->next=Root->next->left;
            }
            Root=Root->next;
        }
        temp=temp->left;
        Root=temp;
        }
        return root;
    }
};