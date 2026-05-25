# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def helpfun(li, ri, root):
            if not root:
                return True
                
            if li>=root.val:
                return False
            if ri<=root.val:
                return False

            return helpfun(li, root.val, root.left) and helpfun(root.val, ri, root.right)
            
        
        return helpfun(float('-inf'), float('inf'), root)