"""
Avishek Paul
B19CS038
hawt_sauce
"""

class Solution:
    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
        
        def inorder(original: TreeNode, cloned: TreeNode):
            if original:
                inorder(original.left, cloned.left)
                if original == target: 
                    self.cloned_target = cloned
                inorder(original.right, cloned.right)
        
        inorder(original, cloned)
        
        return self.cloned_target
        
        
