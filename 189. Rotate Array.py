class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        temp = [x for x in nums]
        i, j, m = 0, len(nums) - k, 0
        while i < len(nums):
            j = j % len(nums)
            nums[i] = temp[j]
            i += 1
            j += 1

        
