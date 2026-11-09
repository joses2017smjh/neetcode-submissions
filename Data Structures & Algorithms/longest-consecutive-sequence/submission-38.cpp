class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set longse(nums.begin(), nums.end());
        int length = 0;
        int cur_length =0;

        for (int num : longse){
            if(!longse.count(num-1)){
                int cur_length =1;
                while(longse.count(num+1)){
                    cur_length++;
                    num++;
                }
                length = max(cur_length, length);

            }

            }
            return length;
        }
};
