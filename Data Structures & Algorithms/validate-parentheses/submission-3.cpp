class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> validpar = {{'(', ')'}, {'{','}'}, {'[', ']'}};
        stack<char> paren;
        for(int x = 0; x < s.size(); x++){
            if(s[x] == '(' || s[x] ==  '{' ||s[x] ==  '[' ){
                paren.push(s[x]);
            }else{
                if(paren.empty()||validpar[paren.top()] != s[x]){
                    return false;
                }
                paren.pop();
                
            }

        }
        if (!paren.empty()){
            return false;
        }
        return true;
    }
};
