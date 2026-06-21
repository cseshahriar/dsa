# Recursive tree 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

class Solution:
    def fib(self, n: int) -> int:
        # Base case
        if n == 0 or n == 1:
            return n  # 1

        # Recursive case
        return self.fib(n-1) + self.fib(n-2)

soln = Solution()
result = soln.fib(6)   # 8
print(result)