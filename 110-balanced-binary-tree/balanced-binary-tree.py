# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: TreeNode | None) -> bool:
        balance = 0
         
        def height_balance(root):
            if root is None:
                return 0

            left = height_balance(root.left)
            right = height_balance(root.right)

            nonlocal balance
            balance = max(balance, abs(left - right))

            return 1 + max(left, right)
        
        height_balance(root)
        if balance > 1:
            return False
        return True