class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string> > um;

        for (int x = 0; x < strs.size(); x++){
            string temp = strs[x];
            sort(temp.begin(), temp.end());

            um[temp].push_back(strs[x]);
        
        }
        
        vector<vector<string>> ans;

        for(auto str : um){
            ans.push_back(str.second);
        }
        return ans;
        
    }
};
