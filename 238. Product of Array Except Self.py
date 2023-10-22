class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        pref1 = [1] * n
        pref2 = [1] * n
        i, j = 0, n - 1
        while i < n:
            if i == 0 and j == n - 1:
                pref1[i] = (nums[i])
                pref2[j] = (nums[j])
            else:
                pref1[i] = (nums[i] * pref1[i - 1])
                pref2[j] = (nums[j] * pref2[j + 1])
            i += 1
            j -= 1
        ans = []
        for i in range(n):
            if i == 0:
                ans.append(pref2[i + 1])
            elif i < n - 1:
                ans.append(pref1[i - 1] * pref2[i + 1])
            else:
                ans.append(pref1[i - 1])
        return ans
#1,2,3,4]
#24,12,8,6
#1,2,6,24
#24,24,12,4
