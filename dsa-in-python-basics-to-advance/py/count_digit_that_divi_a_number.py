class Solution:
    def countDigits(self, num:int) -> int:
        temp = num
        ans = 0
        while temp > 0:
            last_digit = temp % 10 # last digit 1248 // 10 = 124 
            if num % last_digit == 0: 
                ans += 1
            temp//=10 # শেষ digit ফেলে দেয় temp = 124 // 10 = 12

        return ans

soln = Solution()
result = soln.countDigits(121)  # 2:1,1
print(result)
