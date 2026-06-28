from typing import List

# [1, 2, 3, 4]
# [1, 1+2, 1+2+3, 1+2+3+4]
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = []
        ans.append(nums[0])
        
        for i in range(1, n):
            x = ans[i-1] + nums[i] # prev ans + next number of arr
            ans.append(x)
        
        return ans