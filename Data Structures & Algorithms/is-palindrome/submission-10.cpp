class Solution {
public:
    bool isPalindrome(string s) {
        int leftpointer = 0;
        int rightpointer = s.size()-1;
        while(leftpointer < rightpointer){
            if(isalnum(s[leftpointer]) && isalnum(s[rightpointer])){
                if(tolower(s[leftpointer]) != tolower(s[rightpointer])){
                    return false;
                }
                rightpointer--;
                leftpointer++;

            }else{
                if (!isalnum(s[leftpointer])){
                    leftpointer++;
                }
                if(!isalnum(s[rightpointer])){
                    rightpointer--;
                }
                
            }
        }
    
        return true;
    }
};
