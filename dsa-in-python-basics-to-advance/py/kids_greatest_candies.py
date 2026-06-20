# 1431 Kids with the greatest number of candies
class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        # ans = [(i+extraCandies) >= max(candies) for i in candies]
        maxCandies = max(candies)
        ans = []
        for i in candies:
            if(i+extraCandies) >= maxCandies:
                ans.append(True)
            else:
                ans.append(False)

        return ans
