class Solution:
    def countOdds(self, low: int, high: int) -> int:
        # count = 0
        # for i in range(low, high + 1):
        #     if i % 2 != 0:
        #         count += 1
        
        # return count
        """
        # (high+1)//2 = 0 থেকে high পর্যন্ত odd সংখ্যার সংখ্যা
        # low//2 = 0 থেকে low-1 পর্যন্ত odd সংখ্যার সংখ্যা
        # তাই দুটো বিয়োগ করলে low থেকে high পর্যন্ত odd সংখ্যার সংখ্যা পাওয়া যায়
        return (high + 1) // 2 - low // 2

        0 1 2 3 4 5 6 7
        ↑   ↑   ↑   ↑
        1   3   5   7   => মোট 4টি odd

        0 1 2
        ↑
        1           => মোট 1টি odd

        4 - 1 = 3
        """
        return (high + 1) // 2 - low // 2


sol = Solution()
result = sol.countOdds(3, 7)
print(result)