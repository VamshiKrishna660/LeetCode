# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from typing import Optional
class Solution:
    def fun(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        left = self.fun(root.left)
        if left == -1:
            return -1

        right = self.fun(root.right)
        if right == -1:
            return -1

        if abs(left - right)>1:
            return -1
        
        return 1 + max(left,right)

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True
        return self.fun(root) != -1
        