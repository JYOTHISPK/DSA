class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        k = 2
        left = max_size = 0
        d = {}
        for right in range(len(fruits)):
            new = fruits[right]
            if new in d:
                d[new] += 1
            else:
                k -= 1
                if k < 0:
                    while left <= right:
                        d[fruits[left]] -= 1
                        if not d[fruits[left]]:
                            del d[fruits[left]]
                            left += 1
                            break
                        left += 1
                d[new] = 1
            max_size = max(max_size,right-left+1)
        return max_size