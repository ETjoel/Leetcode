class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        if c == 0 or c == 1:
            return True
        ptr1 = 0;
        ptr2 = int(sqrt(c))
        while ptr1 <= ptr2:
            if ptr1*ptr1 + ptr2*ptr2 < c:
                ptr1 += 1
            elif ptr1*ptr1 + ptr2*ptr2 > c:
                ptr2 -= 1
            else:
                return True
        return False
