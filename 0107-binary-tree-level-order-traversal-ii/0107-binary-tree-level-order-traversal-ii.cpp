/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> V;
        int index=0;
        tree(root,V,index);
        for(int i=0; i<V.size()/2; i++){
            vector<int> dummy=V[i];
            V[i]=V[V.size()-1-i];
            V[V.size()-1-i]=dummy;
        }
        return V;
    }

    void tree(TreeNode* root, vector<vector<int>>& V, int index){
        if(root==NULL) return ;
        if(V.size()==index){
            V.resize(V.size()+1);
        }
        V[index].push_back(root->val);

        tree(root->left,V,index+1);
        tree(root->right,V,index+1);
    }
};