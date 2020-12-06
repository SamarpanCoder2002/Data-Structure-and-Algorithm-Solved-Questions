def lengthOfLastWord(self, s: str) -> int:
        length = len(s)
        len_word = 0
        while length:
            length-=1
            if s[length] !=" ":
                len_word+=1
            elif len_word>0:
                return len_word
        return len_word    
