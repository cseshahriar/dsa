# check power of two

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        # while n % 2 == 0:  # jotokkon 2 dia vag jay
        #     n//=2 # 2 dia vag koro

        # if n == 1:
        #     return True
        # else:
        #     return False

        # base case
        if(n <= 0):
            return False

        if n == 1:
            return True

        if n % 2 != 0:
            return False

        # recursive case
        return self.isPowerOfTwo(n/2)
