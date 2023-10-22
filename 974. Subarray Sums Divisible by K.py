class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        pref = []
        for num in nums:
            if len(pref) == 0:
                pref.append(num % k)
            else:
                pref.append((pref[-1] + num % k) % k)
        dic = defaultdict(int)
        ans = 0
        for sum in pref:
            if sum == 0:
                ans += 1 + dic[sum]
            elif sum in dic:
                ans += dic[sum]
            dic[sum] += 1
        return ans

#8 9 7 8 9
#0 1 0 0 1
#
