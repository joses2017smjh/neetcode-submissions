class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        
        res = []
        stack = []

        def backtrack(front, back):
            if ( n == front == back):
                res.append("".join(stack))
                return
            if front < n:
                stack.append("(")
                backtrack(front+1,back )
                stack.pop()

            if back < n and back < front:
                stack.append(")")
                backtrack(front, back+1)
                stack.pop()
            
        backtrack(0,0)
        return res