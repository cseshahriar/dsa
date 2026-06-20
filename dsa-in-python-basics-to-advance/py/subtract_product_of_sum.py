# Subtract the product and sum of digits of integerr
# n = 1234
# product = 24
# sum = 9
# op = 15

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        temp = n
        sum_ = 0
        product = 1
        while temp > 0:
            r = temp % 10 # last digit
            temp //= 10 # rm last digit
            sum_ += r
            product *= r
        
        return product - sum_

soln = Solution()
result = soln.subtractProductAndSum(234)
print(result)