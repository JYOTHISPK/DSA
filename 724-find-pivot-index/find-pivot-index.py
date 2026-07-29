class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        n = len(nums)
        temp_left = [0]*n
        temp_right = [0]*n
        temp_left[0] = temp_right[n-1] = sum = 0

        for i in range(1,n):
            sum += nums[i-1]
            temp_left[i] = sum
        
        print(*temp_left)
        sum = 0
        for i in range(n-2,-1,-1):
            sum += nums[i+1]
            temp_right[i] = sum
        
        print(*temp_right)

        for i in range(n):
            if temp_left[i] == temp_right[i]:
                return i
        
        return -1

        
            