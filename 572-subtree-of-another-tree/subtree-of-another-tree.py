# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def isSubtree(self, root: TreeNode | None, subroot: TreeNode | None) -> bool:
        ans = False

        def isidentical(root, subroot):
            if root is None and subroot is None:
                return True
            if root is None or subroot is None:
                return False
            left = isidentical(root.left, subroot.left)
            right = isidentical(root.right, subroot.right)
            if root.val != subroot.val:
                return False
            return left and right

        def infix(root, subroot):
            if root is None:
                return 
            infix(root.left, subroot)
            infix(root.right, subroot)

            if root.val == subroot.val:
                print(root.val)
                nonlocal ans
                ans = ans or isidentical(root, subroot)

        infix(root, subroot)
        return ans

            
            