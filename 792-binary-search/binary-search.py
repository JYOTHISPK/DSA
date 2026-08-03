class Solution:
    def binary(self,nums,left,right,target):
        while left <= right:
            mid = (left + right) // 2
            if target > nums[mid]:
                left = mid + 1
            elif target < nums[mid]:
                right = mid - 1
            else:
                return mid
        return -1
        
    def search(self, nums: List[int], target: int) -> int:
        ans = self.binary(nums,0,len(nums)-1,target)
        return ans