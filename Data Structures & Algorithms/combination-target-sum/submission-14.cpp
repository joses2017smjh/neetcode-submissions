class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> curent;
        backtrack(0, target, ans, nums, curent);
        return ans;
    }

    void backtrack(int ind, int target, vector<vector<int>>& ans, vector<int>& nums, vector<int>&current){

        if(ind == nums.size() || target < 0){
            return;
        }

        if(target == 0){
            ans.push_back(current);
            return;
        }


        current.push_back(nums[ind]);
        backtrack(ind, target - nums[ind], ans, nums, current);
        current.pop_back();
        backtrack(ind+1, target, ans, nums, current);
        
    }
};
