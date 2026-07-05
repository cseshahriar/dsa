# 26 Remove duplicates from sorted array
from typing import List


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)

        start = 0
        for i in range(1, n):
            # unique element
            if nums[i] != nums[start]:
                start += 1
                nums[start] = nums[i]
        
        return start + 1
