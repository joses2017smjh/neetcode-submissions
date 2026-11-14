class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap_stones(stones.begin(), stones.end());

        while(heap_stones.size() > 1){
            int stone_1 = heap_stones.top();
            heap_stones.pop();
            int stone_2 = heap_stones.top();
            if( (stone_1 - stone_2) == 0){
                heap_stones.pop();
            }else{
                heap_stones.pop();
                heap_stones.push((stone_1 - stone_2));
            }
        }
        if(heap_stones.empty()){
            return 0;
        }

        return heap_stones.top();
    }
};
