class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        temp = [0]*(len(nums))
        index = 0
        for i in nums:
            if i != 0:
                temp[index] = i
                index += 1
        nums[:] = temp
        