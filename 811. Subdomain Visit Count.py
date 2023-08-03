class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        dic = {}
        ans = []
        for i in range(len(cpdomains)):
            temp = cpdomains[i].strip().split()
            temp2 = temp[1].split('.')
            j = len(temp2) - 1
            a = ""
            while j >= 0:
                if j == len(temp2) - 1:
                    a = temp2[j]
                else:
                    a = temp2[j] + '.' + a
                print(a)
                if a in dic:
                    dic[a] += int(temp[0])
                else:
                    dic[a] = int(temp[0])
                j -= 1    
        for file in dic:
            ans.append(str(dic[file]) + ' ' + file)
        return ans
