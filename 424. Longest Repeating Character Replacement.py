class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        dic = defaultdict(int)
        ans = -inf
        i = 0
        for j in range(len(s)):
            dic[s[j]] += 1
            maxCount = max(dic.values())
            if j - i + 1 - maxCount > k:
                dic[s[i]] -= 1
                i += 1
            ans = max(ans, j - i + 1)

        return ans
