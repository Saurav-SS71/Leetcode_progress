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
        vector<vector<Node*>> V;
        int index=0;
        Level(root,V,index);
        for(int i=0; i<V.size(); i++){
            for(int j=0 ; j<V[i].size()-1; j++){
                V[i][j]->next=V[i][j+1];
            }
            V[i][V[i].size()-1]->next=NULL;
        }
        return root;
    }

    // save the pointers address in the level order and then use next to point to other right element and at the end point it to the null pointer;

    void Level(Node* root, vector<vector<Node*>>& V, int index){
        if(!root) {
            return;
        }
        if(index==V.size()){
            V.resize(V.size()+1);
        }
        V[index].push_back(root);

        Level(root->left,V,index+1);
        Level(root->right,V,index+1);
    }
};












