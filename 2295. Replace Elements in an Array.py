class Solution:
    def arrayChange(self, nums: List[int], operations: List[List[int]]) -> List[int]:
        dic = {}
        for i in range(len(nums)):
            dic[nums[i]] = i
        #print(dic)
        for i in range(len(operations)):
            #print(operations[i][0], operations[i][1])
            if operations[i][0] in dic:
                index = dic[operations[i][0]]
                nums[index] = operations[i][1]
                dic[nums[index]] = index
        return nums
