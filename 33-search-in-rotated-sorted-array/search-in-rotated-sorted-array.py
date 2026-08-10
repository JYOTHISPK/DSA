class Solution:
    def fun(self, nums, low, high, target):
        while low <= high:
            mid = low + (high - low) // 2
            if nums[mid] == target:
                return mid
            elif nums[low] <= target < nums[mid]:
                high = mid - 1
            elif nums[mid] < target <= nums[high]:
                low = mid + 1
            elif nums[high] < nums[mid]:
                if target <= nums[high] or target > nums[mid]:
                    low = mid + 1
                else:
                    high = mid - 1
            elif nums[low] > nums[mid]:
                if target >= nums[low] or target < nums[mid]:
                    high = mid - 1
                else:
                    low = mid + 1
            else:
                return -1
        return -1


    def search(self, nums: List[int], target: int) -> int:
        low, high = 0, len(nums)-1
        return self.fun(nums,low,high,target)