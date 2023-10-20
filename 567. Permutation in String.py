class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        dic = defaultdict(int)
        dic2 = defaultdict(int)
        for i in range(len(s1)):
            dic[s1[i]] += 1
            dic2[s2[i]] += 1
        if dic == dic2:
            return True
        for i in range(len(s1), len(s2)):
            dic2[s2[i]] += 1
            if dic2[s2[i - len(s1)]] > 1:
                dic2[s2[i - len(s1)]] -= 1
            else:
                del dic2[s2[i - len(s1)]]
            if dic == dic2:
                return True
        return False
