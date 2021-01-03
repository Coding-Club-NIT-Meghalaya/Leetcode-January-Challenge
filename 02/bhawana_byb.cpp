/**
name-bhawana maurya
roll no.-b19cs022
leet code_id-bhawana_byb
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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* root=cloned;
        queue <TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root=st.front();
            st.pop();
            if(root->val==target->val)
                return root;
            if(root->left!=NULL)
                st.push(root->left);
            if(root->right!=NULL)
                st.push(root->right);
        }
       return NULL; 
        
    }
};
