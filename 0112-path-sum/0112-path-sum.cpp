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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return path(root,0,targetSum);
    }

    bool path(TreeNode* root, int sum, int target){
        if(!root) return false;
        if(root->left==NULL&&root->right==NULL) {
            if(sum+root->val==target){
                return true;
            }
            return false;
        }
        if(path(root->left,sum+root->val,target)||path(root->right,sum+root->val,target)) return true;
        return false;
    }
};