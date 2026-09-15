class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        m, n = len(nums1), len(nums2)
        total = (m + n) // 2
        count = prev = curr = i = j = 0

        while i < m and j < n and count <= total:
            prev = curr
            if nums1[i] <= nums2[j]:
                curr = nums1[i]
                i += 1
            else:
                curr = nums2[j]
                j += 1
            count += 1
        
        while i < m and count <= total:
            prev = curr
            curr = nums1[i]
            i += 1
            count += 1

        while j < n and count <= total:
            prev = curr
            curr = nums2[j]
            j += 1
            count += 1

        if (m + n) % 2:
            return curr

        return ( curr + prev ) / 2