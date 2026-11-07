class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>subs;
        dfs(0, nums, res, subs);
        return res;
    }
    void dfs(int it, vector<int>& nums, vector<vector<int>>& res, vector<int>& cur){
        if(it == nums.size()){
            res.push_back(cur);
            return;
        }
        cur.push_back(nums[it]);
        dfs(it+1, nums, res, cur);

        cur.pop_back();
        dfs(it+1, nums, res, cur);
    }
};
