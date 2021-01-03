/*
Name: Shivam Pandit
RollNo: B19CS013
LeetCode Username: ship51
*/


class Solution {
public:
    TreeNode* result;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
          
        TreeNode* root2 = cloned;
        search(root2, target->val);       
        return result;
        
    }
    int found=0;
    void search (TreeNode* root, int value){
        
        if (!root || (found==1))
            return;
        if (root->val == value){
            result = root;
            found=1;
            return;
        }
        search(root->left, value);
        search(root->right, value);
        return;
    } 
};
