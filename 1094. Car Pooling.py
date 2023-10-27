class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        start, end = 0, 0
        for num, f, t in trips:
            start = min(f, start)
            end = max(t, end)
        pref = [0] *(end - start+2)
        for num,f,t in trips:
            pref[f] += num
            pref[t] -= num
        for i in range(end - start):
            pref[i] += pref[i - 1]
            if pref[i] > capacity:
                return False
        return True
