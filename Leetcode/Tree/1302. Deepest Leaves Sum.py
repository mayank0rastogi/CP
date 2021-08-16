# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    total = 0
    deepest = None
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
	      self.deepest=self.get_max_depth(root)  # get the max depth (used in get_sum)
        self.total=self.get_sum(root,1)
        return self.total
        

	def get_max_depth(self, root):
		return 1 + max(self.get_max_depth(root.left), self.get_max_depth(root.right)) if root else 0

	def get_sum(self, root, depth): # just adds to the total where the depth == self.deepest
		if root:
			if depth == self.deepest:
				self.total += root.val

			self.get_sum(root.left, depth + 1)
			self.get_sum(root.right, depth + 1)
