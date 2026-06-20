from typing import List

class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ans = []
        for i in nums:
            c = 0
            for j in nums:
                if j < i:
                    c += 1
            ans.append(c)

        return ans

sol = Solution()
# 8 ar moddy choto number koto golo in list
# 8, 1, 2, 2, 3
# 4, 0, 1, 1, 1&2
result = sol.smallerNumbersThanCurrent([8,1,2,2,3])  
print(result)
