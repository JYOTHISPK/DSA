class Solution:
    def search(self, piles, low, high, h):
        ans = high
        while low <= high:
            mid = low + (high - low) // 2
            count  = 0
            for i in piles:
                if not i % mid:
                    count += i // mid
                else:
                    count += (i // mid) + 1
            if count <= h:
                ans = mid
                high = mid - 1
            else:
                low = mid + 1
        return ans

    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        low, high = 1, max(piles)
        return self.search(piles,low,high,h)