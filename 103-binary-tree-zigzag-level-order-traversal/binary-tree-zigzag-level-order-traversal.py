# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque

class Solution:
    def zigzagLevelOrder(self, root: TreeNode | None) -> list[list[int]]:
        q = deque()
        ans = []
        if root:
            q.append(root)
        count = 0
        while q:
            n = len(q)
            level = []
            count += 1
            for _ in range(n):
                node = q.popleft()
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
                level.append(node.val)
            if count % 2:
                ans.append(level)
            else:
                ans.append(level[::-1])
        return ans