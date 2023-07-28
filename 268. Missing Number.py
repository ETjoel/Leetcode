class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        temp = list(map(int, range(0, len(nums) + 1)))
        ans = list(set(temp) - set(nums))
        return ans[0]
