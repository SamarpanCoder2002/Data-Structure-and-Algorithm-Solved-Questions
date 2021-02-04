class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.split(" ")
        while '' in s:
            s.remove('')
        if len(s) == 0:
            return 0
        s = s[len(s)-1]
        count = 0
        
        for x in s:
            count+=1
        return count
