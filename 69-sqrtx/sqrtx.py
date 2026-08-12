class Solution:
    def mySqrt(self, x: int) -> int:
        if x <= 0:
            return 0
        if x <= 3:
            return 1
        left, right = 2, x // 2
        ans = x
        while left <= right:
            mid = left + (right - left) // 2
            val = mid * mid
            if val == x:
                return mid
            elif val < x:
                ans = mid
                left = mid + 1
            elif val > x:
                right = mid - 1
        return ans