/* Name: DEBAYAN GHOSH
   Roll No:B19ME002
   LeetCode Userame:_dghosh*/
   /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    void Preorder(TreeNode* root,TreeNode* target,TreeNode*& ans){
        if(!root) return;
        if(root->val==target->val){
            ans=root;
            return;
        }
        Preorder(root->left,target,ans);
        Preorder(root->right,target,ans);
        return;
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original) return original;
        TreeNode* found=nullptr;
        Preorder(cloned,target,found);
        return found;
        
    }
};
