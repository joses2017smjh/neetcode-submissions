class Solution {
public:

    string encode(vector<string>& strs) {
        string current = "";
        for(int x = 0; x < strs.size(); x++){
            current += "@@";

            for(int y = 0; y < strs[x].size(); y++){
                current += strs[x][y];
            }
        }
        return current;

    }

    vector<string> decode(string s) {
        vector<string> vs;
        int words = -1;
        for(int dc =0; dc < s.size(); dc ++){
            if(s[dc] == '@' && s[dc+1] == '@'){
                words++;
                vs.push_back("");
                dc ++;
            }else{
            vs[words] += s[dc];
            }
        }
        return vs;
    }
};
