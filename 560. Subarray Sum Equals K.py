class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        pref = []
        for num in nums:
            if len(pref) == 0:
                pref.append(num)
            else:
                pref.append(num + pref[-1])

        dic = defaultdict(int)
        c = 0

        for s in pref:
            if s == k:
                c += 1
            if s - k in dic:
                c += dic[s - k]
            dic[s] += 1
        return c

#1, 2, 3
#
       
            
