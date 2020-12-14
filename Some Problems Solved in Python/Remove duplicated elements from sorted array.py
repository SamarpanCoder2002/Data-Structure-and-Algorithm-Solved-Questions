# Remove Duplicates from Sorted Array

# Here I use Python because I still not know STL in C++...So, Time complexity is very much high for this solution...
# But this solution passes all test cases....
# In Future, I definitely learn STL, and then do it again...Then time complexity
# problem will not come.......

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        length = len(nums)
        i=0
        while True:
            if i ==len(nums)-1 or len(nums)==0:
                break
            if nums.count(nums[i])==1:
                i+=1
            else:
                while nums.count(nums[i])!=1:
                    nums.remove(nums[i])
        return len(nums)   
