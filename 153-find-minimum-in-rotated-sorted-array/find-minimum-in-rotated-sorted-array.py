class Solution:
    def search(self, nums, low, high):
        ans = float('inf')
        while low <= high:
            mid = low + (high - low) // 2
            if nums[low] <= nums[mid] <= nums[high]:
                return min(nums[low],ans)
            elif nums[low] > nums[mid]:
                ans = min(ans,nums[mid])
                high = mid - 1
            elif nums[high] < nums[mid]:
                ans = min(ans,nums[high])
                low = mid + 1
        return ans
 
    def findMin(self, nums: List[int]) -> int:
        low, high = 0, len(nums)-1  
        return self.search(nums,low,high)