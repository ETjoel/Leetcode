class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        i = len(s) - 1
        j = 0
        while i > j:
            if not( (s[j] >= 'a' and s[j] <= 'z') or (s[j] >= '0' and s[j] <= '9')):
                j += 1
                continue
            if not ((s[i] >= "a" and s[i] <= "z")  or (s[i] >= '0' and s[i] <= '9')):
                i -= 1
                continue
            if s[i] == s[j]:
                i -= 1
                j += 1
            else: 
                print(i, j)
                print(s[i], s[j])
                return False
        return True
