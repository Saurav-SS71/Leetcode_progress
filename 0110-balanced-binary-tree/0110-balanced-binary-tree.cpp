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
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;

        int ansL=0,ansR=0,count=0;
        Depth(root->left,ansL,count);Depth(root->right,ansR,count);
        if(abs(ansL-ansR)>1) return false;

        if(!(isBalanced(root->left)&&isBalanced(root->right))) return false;
        
        return true;
    }

    void Depth(TreeNode* root,int& ans, int count){
        if(root==NULL){
            ans=max(ans,count);
            return;
        }
        Depth(root->left,ans,count+1);Depth(root->right,ans,count+1);
    }
};