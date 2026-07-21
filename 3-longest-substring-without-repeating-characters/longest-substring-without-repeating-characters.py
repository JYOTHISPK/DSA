class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left = count = max_count = 0
        d = {}
        for right in range(len(s)):
            count += 1
            if s[right] not in d:
                d[s[right]] = 1
            else :
                while s[left] != s[right]:
                    del d[s[left]]
                    left += 1
                left += 1
                count = right-left+1
            max_count = max(max_count,count)
        return max_count
