class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums.sort()
        new_index = 1
        while new_index<len(nums):
            prev=nums[new_index-1]
            now=nums[new_index]
            if now==prev:
                return now
            new_index+=1
    
            
