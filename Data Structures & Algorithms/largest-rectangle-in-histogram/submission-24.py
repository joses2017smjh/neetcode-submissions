class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        st = [] # pair of indices and height
        max_ans = 0 # Current max height
        for i, h in enumerate(heights): #iterate throug the max values
            start_inds = i 
            while st and st[-1][1] > h:
                start_ind, h2 = st.pop()
                max_ans = max(max_ans, (i - start_ind)* h2)
                start_inds = start_ind
                #st.append((i, h))
            st.append((start_inds, h))
        for i, h in st:
            #lasti, lasth = st.pop()
            last_len = len(heights) 
            max_ans = max(max_ans, ((last_len - i) * h))
        return max_ans
