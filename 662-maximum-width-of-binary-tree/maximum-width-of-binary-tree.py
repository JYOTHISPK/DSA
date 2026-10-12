# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque

class Solution:
    def widthOfBinaryTree(self, root: TreeNode | None) -> int:
        q = deque()
        q.append([root, 0])
        max_width = 1
        while q:
            n = len(q)
            start = end = 0
            for _ in range(n):
                curr = q.popleft()
                node = curr[0]
                index = curr[1]
                if node.left:
                    q.append([node.left, 2*index+1])
                    if not start:
                        start = 2*index+1
                    end = 2*index+1
                if node.right:
                    q.append([node.right, 2*index+2])
                    if not start:
                        start = 2*index+2
                    end = 2*index+2
            max_width = max(max_width, end - start + 1)
        return max_width