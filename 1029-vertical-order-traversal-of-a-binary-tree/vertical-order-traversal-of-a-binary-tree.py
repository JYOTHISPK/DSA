# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def vertical(self, root, row, col, l):
        if not root:
            return
        l.append([col, row, root.val])
        self.vertical( root.left, row+1, col-1, l)
        self.vertical( root.right, row+1, col+1, l)

    def verticalTraversal(self, root: TreeNode | None) -> list[list[int]]:
        l = []
        ans = []
        self.vertical(root, 0, 0, l)
        l.sort()
        prev_col = float('-inf')
        for col, row, val in l:
            if col != prev_col:
                ans.append([])
                prev_col = col
            ans[-1].append(val)
        return ans
