# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        queue = []
        
        def ino(root):
            if root.left:
                ino(root.left)

            queue.append(root.val)
            if root.right:
                ino(root.right)
            
        ino(root)
        for i in range(0, len(queue)-1):
            if queue[i] >= queue[i+1]:
                return False
        
        print(queue)
        return True