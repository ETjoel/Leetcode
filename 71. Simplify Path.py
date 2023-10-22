class Solution:
    def simplifyPath(self, path: str) -> str:
        s = list(path.split('/'))
        st = []
        for string in s:
            if string != '.' and string != '..' and string != '':
                st.append(string)
            elif string == '..' and len(st) > 0:
                st.pop()
        return '/' + '/'.join(st)
