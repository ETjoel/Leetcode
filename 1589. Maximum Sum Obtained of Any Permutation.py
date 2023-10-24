class Solution:
    def maxSumRangeQuery(self, nums: List[int], requests: List[List[int]]) -> int:
        pref = [0] * (len(nums) + 1)
        for i, j in requests:
            pref[i] += 1
            pref[j + 1] -= 1
        for i in range(1,len(pref)):
            pref[i] += pref[i - 1]
        pref.pop()
        pref.sort(reverse = True)
        nums.sort(reverse = True)
        ans = 0
        for i in range(len(nums)):
            ans += (nums[i] * pref[i])
        return ans % (10 ** 9 + 7)

    #1 2 3 4 5
    #1 6 3 4 1
    #1 7 10 14 15
