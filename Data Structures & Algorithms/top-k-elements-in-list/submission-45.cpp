class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       //sort(nums.begin(), nums.end());
        unordered_map<int, int> hash;
        for(auto& n : nums) hash[n]++;
        priority_queue<pair<int, int>> pk;
        for(auto& [key, val ] : hash){
             pk.push({-val, key});
            if(pk.size() > k ){
                pk.pop();
            }
           
            
        }
        vector<int> ans;
        for(int x = 0; x < k; x++){
            int answer = pk.top().second;
            pk.pop();
            ans.push_back(answer);
        }
        return ans;

        }
    
};