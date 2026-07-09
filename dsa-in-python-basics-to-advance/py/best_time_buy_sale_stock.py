from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_pirce = prices[0]
        profit = 0
        n = len(prices)
        for i in range(1, len(prices)):
            current_pofit = prices[i] - min_pirce
            if current_pofit > profit:
                profit = current_pofit
            min_pirce = min(min_pirce, prices[i])

        return profit
