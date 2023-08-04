class Solution:
    def check(self, arr: List[int], s: int) -> int:
        max_index = 0
        for i in range(s+1):
            if arr[max_index] < arr[i]:
                max_index = i
        return max_index
    def pancakeSort(self, arr: List[int]) -> List[int]:
        ans = []
        s = len(arr) - 1
        while s > 0:
            max_index = self.check(arr, s)
            if max_index == s:
                s -= 1
                continue
            arr = list(reversed(arr[:max_index + 1])) + arr[max_index + 1:]
            print(arr)
            arr = list(reversed(arr[:s + 1]))  + arr[s + 1:]
            print(arr)
            print("---")
            ans.append(max_index +1)
            ans.append(s+1)
            s -= 1
        return ans
            
