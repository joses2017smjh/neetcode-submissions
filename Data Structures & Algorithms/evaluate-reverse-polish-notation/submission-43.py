class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []
        def operation(x, y, a) -> int:
            if(a == '+'):
                return (x+ y)
            if (a == '-'):
                return(x -y)
            if(a == '*'):
                return (int)(x*y)
            if(a == '/'):
                return (int)(x/y)
        i=0
        if (len(tokens) < 2):
            return int(tokens[0])
        while i < len(tokens):

            while (tokens[i] not in ['*', '/', '+', '-']):
                st.append(int(tokens[i]))
                i += 1
            x = st.pop()
            y = st.pop()
            st.append(operation(y, x, tokens[i]))
            i += 1
            print(st[-1])

 
        return int(st[0])

        