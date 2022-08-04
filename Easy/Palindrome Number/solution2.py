class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        else:        
            forward = x
            remainder = -1
            backward = 0

            while (x != 0):
                remainder = x % 10
                backward = backward*10 + remainder
                x //= 10

            return (backward == forward)