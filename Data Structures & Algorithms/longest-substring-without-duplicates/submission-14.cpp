class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> counts;

        int longest = 0;
        int sameindex = 0;
        for(int x = 0; x < s.size(); x++){
        
            if(counts.count(s[x]) && counts[s[x]] >= sameindex ){
                sameindex = counts[s[x]] + 1;
            }
            counts[s[x]] = x;
            int window = x - sameindex + 1;
            longest = max(longest , window);
        }
        return longest;
        
    }
};
