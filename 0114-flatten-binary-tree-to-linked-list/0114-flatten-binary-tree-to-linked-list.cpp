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
private:
    void DFS(TreeNode* root,vector<int>& V,int Code){
        if(!root) return;
        V.push_back(root->val);
        DFS(root->left,V,0);
        DFS(root->right,V,0);
        if(!Code){
            delete(root);
        }
    }
public:
    void flatten(TreeNode* root) {
        if(!root) return ;
        vector<int> V;
        DFS(root,V,1);
        root->left=NULL;
        TreeNode* temp=root;
        for(int i=1; i<V.size(); i++){
            TreeNode* New=new TreeNode(V[i]);
            temp->right=New;
            temp=temp->right;
        }
    }
};