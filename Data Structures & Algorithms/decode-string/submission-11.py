class Solution:
    def decodeString(self, s: str) -> str:
        st = []
        for i in range(len(s)):
            if s[i] != ']':
                st.append(s[i])
            else:
                strings = ""
                while(st and st[-1] != '['):
                    strings = st.pop() + strings
                st.pop()
                stringnum = ""
                while st and st[-1].isdigit():
                    stringnum = st.pop() + stringnum
                st.append(int(stringnum)* strings)
        return "".join(st)

        