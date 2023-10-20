class NumArray:
    pref = []
    def __init__(self, nums: List[int]):
        self.pref = []
        for num in nums:
            if len(self.pref) == 0:
                self.pref.append(num)
            else: 
                self.pref.append(self.pref[-1] + num)

    def sumRange(self, left: int, right: int) -> int:
        return self.pref[right] if left == 0 else (self.pref[right] - self.pref[left - 1])
