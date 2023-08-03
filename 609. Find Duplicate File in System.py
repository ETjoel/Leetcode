class Solution:
    def findDuplicate(self, paths: List[str]) -> List[List[str]]:
        ans = []
        dis = {}
        for i in range(len(paths)):
            temp = list(paths[i].strip().split())
            for i in range(len(temp)):
                if i == 0:
                    continue
                splited = temp[i].split('(')
                if splited[1] in dis:
                    dis[splited[1]].append(temp[0] + '/' + splited[0])
                else:
                    dis[splited[1]] = [temp[0] + '/' + splited[0]]
        # print(dis)
        for file in dis:
            if len(dis[file]) > 1:
                ans.append(list(dis[file]))
        return ans
