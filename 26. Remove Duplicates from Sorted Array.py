class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) < 3:
            return len(list(set(nums)))
        i, j = 1, 2
        while j < len(nums):
            print("premise:",nums[i - 1], nums[i], nums[j], "index:", i, j)
            if nums[i] <= nums[i-1] and nums[j] > nums[i - 1]:
               nums[i], nums[j] = nums[j], nums[i]
               i += 1
               j += 1
            elif nums[i] > nums[i - 1]:
                i += 1
                j += 1
            else:
                j += 1
            
            
            
        return len(list(set(nums)))
