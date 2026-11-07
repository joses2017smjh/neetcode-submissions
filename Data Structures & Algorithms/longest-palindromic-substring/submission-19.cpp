class Solution {
public:


    string longestPalindrome(string s) 
    {
       int start = 0;
       int blen = 1;
       vector<vector<bool>> bl(s.size(), vector<bool>(s.size(), false));
        for(int x = 0; x < s.size();x++){
            bl[x][x] = true;
        }

        for( int x=2; x <= s.size(); x++){
            for(int i = 0; i+x -1 < s.size(); i ++){
                int other = i + x -1;
                if(s[i] != s[other]) continue;

                if(x == 2 || bl[i+1][other-1] ){
                    bl[i][other] = true;
                    if( x > blen){
                        start = i;
                        blen = x;
                    }
                }
            }
        }

        return(s.substr(start, blen));

    }
};
