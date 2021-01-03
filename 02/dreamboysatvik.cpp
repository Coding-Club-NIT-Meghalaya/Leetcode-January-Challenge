/*
SATVIK SINGH
B19EE028
dreamboysatvik
*/
class Solution {
public:
	TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
		queue<TreeNode*> oq, cq;
		if (original == NULL)
			return NULL;
		oq.push(original);
		cq.push(cloned);

		while (!oq.empty())
		{
			TreeNode *tmp = oq.front();
			TreeNode *tmpC = cq.front();

			oq.pop();
			cq.pop();

			if (tmp == target)
				return tmpC;

			if (tmp->left)
			{
				oq.push(tmp->left);
				cq.push(tmpC->left);
			}

			if (tmp->right)
			{
				oq.push(tmp->right);
				cq.push(tmpC->right);
			}
		}
		return NULL;
	}
};
