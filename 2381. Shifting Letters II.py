class Solution:
    def shiftingLetters(self, s: str, shifts: List[List[int]]) -> str:
        pref = [0] * (len(s) + 1)
        for st, e, d in shifts:
            dir = 1 if d else -1
            pref[st] += dir
            pref[e + 1] -= dir
        
        for i in range(1,len(s)):
            pref[i] += pref[i - 1]
        ans = []
        for i in range(len(s)):
            ans.append(chr((ord(s[i]) - ord("a") + pref[i]) % 26 + ord("a")))
        return ''.join(ans)

#abc
#-+
# +-
#+ _
