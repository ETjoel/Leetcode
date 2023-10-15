import math
class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        if len(nums) == 1:
            return 1 if nums[0] >= target else 0
        pref = []
        for num in nums:
            if len(pref) == 0:
                pref.append(num)
            else:
                pref.append(num + pref[-1])
        i, j, ans = 0, 0, math.inf
        for j in range(len(nums)):
            if pref[j] >= target:
                ans = j + 1
                break;
        print(j)
        while j < len(nums):
            while pref[j] - pref[i] >= target:
                ans = min(ans, j - i)
                i += 1
            j += 1
        print(pref)
        return ans if not ans == math.inf else 0

        
