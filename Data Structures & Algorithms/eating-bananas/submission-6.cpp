class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min = 1;
        int max = *max_element(piles.begin(), piles.end());

        while (max > min){
            int current = min + (max - min)/ 2;

            int hour= 0;
            for(int pile : piles ){
                hour += ceil((double) pile/current);
            }
            if (hour > h  ){
                min = current + 1;
            }else{
                max = current;
            }
        }
      
        return min;
    }
};
