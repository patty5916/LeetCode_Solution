class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:     
        length = 0
        temp = ''
        for i, char in enumerate(list(s)):
            if temp.find(char) == -1:
                temp += char
            else:
                if len(temp) > length:
                    length = len(temp)
                temp = temp[temp.find(char)+1:] + char
        
        if len(temp) > length:
            length = len(temp)
            
        return length