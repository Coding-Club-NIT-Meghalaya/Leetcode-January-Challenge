/*
Roll:b19cs039
username:DorababuArigi
student:Dorababu Arigi
*/
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
public:
    bool k=false;
    TreeNode* check(TreeNode* cloned, TreeNode* target){
        if(cloned->val==target->val){
            k=true;
            return cloned;
        }
        if(cloned->left){
            cloned->left=check(cloned->left,target);
            if(k)
            return cloned->left;
        }
        if(cloned->right){
            cloned->right =check(cloned->right,target);
            return cloned->right;
        }
        return cloned;
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
            return check(cloned,target);
    }
};
