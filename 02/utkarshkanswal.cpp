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
    TreeNode * solve(TreeNode* original ,TreeNode*cloned ,TreeNode * target)
    {
        if(original==target)
            return cloned;
        if(original==nullptr)
        {
            return nullptr;
        }
        TreeNode* temp=solve(original->left,cloned->left,target);
        if(temp!=nullptr)
            return temp;
        temp=solve(original->right,cloned->right,target);
        return temp;
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return solve(original,cloned,target);
    }
};