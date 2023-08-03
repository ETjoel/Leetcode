class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str: 
        spaces.sort()
        ans = ""
        j = 0
        for i in range(len(s)):
            if j < len(spaces) and i == spaces[j]:
                ans += ' '
                j += 1
            ans += s[i]
        return ans
