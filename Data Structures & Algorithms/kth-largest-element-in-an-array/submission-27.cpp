class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       
       priority_queue<int> pq;

       for(int x = 0; x < nums.size();x ++){
            pq.push((nums[x]* -1)+1000);
            if (pq.size() > k){
                pq.pop();
            }
       }
       int ans = -1;
       
            ans = pq.top();
            pq.pop();
        

        return (ans-1000)*-1;
    }
       /*
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
    */
};
