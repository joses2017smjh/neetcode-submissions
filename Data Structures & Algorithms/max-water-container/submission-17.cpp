class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector<int> height;

        int left =0;
        int width = heights.size()-1;
        int right = heights.size()-1;
        int length = (pow(min(heights[left], heights[right]), 1) * width);
        for( int x = 1; x < heights.size()-1; x++){
            int current = 0;
            if (left < right  ){
                width--;
                if(heights[left] > heights[right]){
                    right --;
                }else{
                    left ++;
            }
            }
            if (length < min(heights[left], heights[right]) * width){ length = (min(heights[left], heights[right]) * width);}
            }
            return length;


        }

};
