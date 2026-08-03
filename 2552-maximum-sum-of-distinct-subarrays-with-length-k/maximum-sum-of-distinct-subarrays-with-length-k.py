from collections import Counter
class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        count = Counter(nums[:k])
        s_um = sum(nums[:k])
        max_sum = s_um if len(count) == k else 0

        for i in range (k,len(nums)):
            new = nums[i]
            count[new] += 1

            old = nums[i-k]
            count[old] -= 1
            if count[old] == 0:
                del count[old]

            s_um += new - old
            if len(count) == k:
                max_sum = max(max_sum,s_um)

        return max_sum