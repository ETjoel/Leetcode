class Solution:
    def reverse(self, x: int) -> int:
        if x == 0:
            return 0
        while x % 10 == 0:
            x = x // 10
        a = str(abs(x))
        b = ""
        j = len(a) - 1
        while j >= 0:
            b += a[j]
            j -= 1
        if x < 0 and (-1 * int(b)) >= -2147483648:
            return -1 * int(b)
        elif x > 0 and int(b) <= 2147483647:
            return int(b)
        else: 
            return 0
            
