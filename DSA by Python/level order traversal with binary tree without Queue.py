# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def height_founder(self,root):
        if root==None:
            return 0
        
        count_left=self.height_founder(root.left)
        count_right=self.height_founder(root.right)
        
        if count_left>count_right:
            return(count_left+1)
        else:
            return(count_right+1)
        
    def make_level_order(self,root,height,temp):
        if root==None or height==0:
            return
        if  height == 1:
            temp.append(root.val)
        self.make_level_order(root.left,height-1,temp)
        self.make_level_order(root.right,height-1,temp)
           
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        take = self.height_founder(root)
        store=[]
        for i in range(take,0,-1):
            temp=[]
            self.make_level_order(root,i,temp)
            store.append(temp)
        return store 
        
