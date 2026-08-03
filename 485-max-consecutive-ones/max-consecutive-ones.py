class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        left = ans = 0
        for right in range(len(nums)):
            if nums[right]:
                if right > 0 and not nums[right-1]:
                    left = right
                ans = max(ans,right-left+1)
        return ans