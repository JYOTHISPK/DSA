class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        area = 0
        stack = []

        for i in range(len(heights)):
            while stack and heights[i] < heights[stack[-1]]:
                index = stack.pop()

                if stack:
                    width = i - stack[-1] - 1
                else:
                    width = i

                area = max(area, heights[index] * width)

            stack.append(i)

        n = len(heights)

        while stack:
            index = stack.pop()

            if stack:
                width = n - stack[-1] - 1
            else:
                width = n

            area = max(area, heights[index] * width)

        return area