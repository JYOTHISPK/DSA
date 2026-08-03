class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        product = 1
        left = count = 0
        for right in range(len(nums)):
            product *= nums[right]
            if product >= k:
                while product >= k and left <= right:
                    product /= nums[left]
                    left += 1
            count += right - left + 1
        return count
