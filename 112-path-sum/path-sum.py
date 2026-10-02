# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: TreeNode | None, targetSum: int) -> bool:
    
        def pathsum(root, target, targetsum):
            if root is None:
                return False
            target += root.val
            if target == targetsum:
                if root.left is None and root.right is None:
                    return True
            left = pathsum(root.left, target, targetsum)
            right = pathsum(root.right, target, targetsum)
            return left or right

        return pathsum(root, 0, targetSum)