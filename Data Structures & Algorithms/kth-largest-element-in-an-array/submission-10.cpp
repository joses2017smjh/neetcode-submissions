class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<vector<int>> buck(2001);
        for(int x = 0; x < nums.size(); x++){
                buck[nums[x]+1000].push_back(nums[x]);
            }
        for(int size = 2000; size > 0; size-- ){

            for(int x : buck[size]){
                k--;
                if (k == 0){
                    return x;
                }
            }
        }       
        
     return -1;  
    }
};
