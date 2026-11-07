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
    int sumOfLeftLeaves(TreeNode* root) {
        int L=0,sum=0;
        SUM(root,sum,L);
        return sum;
    }
    
    void SUM(TreeNode* root,int& sum, int L){
        if(!root) return;
        if(L&&(root->left==NULL&&root->right==NULL)) sum+=root->val;
        SUM(root->left,sum,L=1);
        SUM(root->right,sum,L=0);
    }
};