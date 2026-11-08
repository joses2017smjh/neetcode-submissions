class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> res;
            vector<bool> current(nums.size(), false);
            vector<int> cur;
            bac_track(cur, current, res, nums);
            return res;

    }
    
    void bac_track(vector<int>& cur, vector<bool>& current, vector<vector<int>>& res, vector<int>& nums){

        if(cur.size() == nums.size()){
            res.push_back(cur);
            return;
        }

        for(int x = 0; x < nums.size(); x++){
            if(current[x] == false){
                cur.push_back(nums[x]);
                current[x] = true;
            
                bac_track(cur, current, res, nums);
                cur.pop_back();
                current[x] = false;
            }

        }
    }





};
