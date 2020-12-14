#Find the Duplicate Number
#Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

#There is only one duplicate number in nums, return this duplicate number.

def findDuplicate(self, nums: List[int]) -> int:
        nums.sort()
        new_index = 1
        while new_index<len(nums):
            prev=nums[new_index-1]
            now=nums[new_index]
            if now==prev:
                return now
            new_index+=1
