class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        temp = list(s)
        temp2 = list(t)
        print(temp, temp2)
        return sorted(temp) == sorted(temp2)
