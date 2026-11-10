class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> pls;
        vector<int> res;
        for(int x = 0; x < nums.size(); x++){
            int check = target - nums[x];
            if(pls.count(check)){
                res.push_back(pls[check]);
                res.push_back(x);
                return res;
            }
            pls[nums[x]] = x;
            

        }
        return{};
        
    }
};
 