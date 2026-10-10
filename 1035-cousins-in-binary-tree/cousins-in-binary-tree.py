# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

from collections import deque

class Solution:
    def isCousins(self, root: TreeNode | None, x: int, y: int) -> bool:
        q = deque()
        x_parent = y_parent = 0
        if root:
            q.append(root)
        while q:
            n = len(q)
            s = set()
            for _ in range(n):
                node = q.popleft()
                if node.left:
                    if node.left.val == x:
                        x_parent = node.val
                    if node.left.val == y:
                        y_parent = node.val
                    q.append(node.left)
                if node.right:
                    if node.right.val == x:
                        x_parent = node.val
                    if node.right.val == y:
                        y_parent = node.val
                    q.append(node.right)
                s.add(node.val)  
            if x in s and y in s and x_parent != y_parent:
                return True
        return False
            
        