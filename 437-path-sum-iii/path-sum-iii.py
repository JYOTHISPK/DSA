# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: TreeNode | None, targetSum: int) -> int:
        
        def pathsum(root, path, targetsum):
            nonlocal count
            if root is None:
                return
            path.append(root.val)
            sum = 0

            for i in range(len(path)-1, -1, -1):
                sum += path[i]
                if sum == targetsum:
                    count += 1

            pathsum(root.left, path, targetsum)
            pathsum(root.right, path, targetsum)
            path.pop()
        
        count = 0
        path = []
        pathsum(root, path, targetSum)
        return count
        
                