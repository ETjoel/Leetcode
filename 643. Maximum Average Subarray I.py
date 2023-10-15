class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        i, j = 0, 0
        ans = 0
        s = 0
        while j < k:
            s += nums[j]
            j += 1
        ans = s
        while j < len(nums):
            s = s - nums[i] + nums[j]
            ans = max(s, ans)
            i += 1
            j += 1
        return ans / k
