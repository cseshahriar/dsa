# 121 reverse korleo same
class Solution:
    def isPalindrome(self, x: int) -> bool:
        temp = x
        rev = 0
        while temp > 0:
            r = temp % 10 # last digit
            temp //= 10 # remove last digit
            rev = rev * 10 + r  # current digit

        return rev == x

