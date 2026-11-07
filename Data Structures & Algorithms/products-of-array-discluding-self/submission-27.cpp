class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int left = 1;
        int right = 1;
        vector<int> sol(nums.size(), 1);
        for(int x =0; x < nums.size(); x++){
            sol[x] *= left;
            left *= nums[x];

            sol[nums.size()-x-1] = sol[nums.size()-x-1] * right;

            right *= nums[nums.size()-x-1];
        }
        return sol;
    }

        /*
        vector<int> left;
        vector<int> sol;
        for(int x = 0; x < nums.size(); x++){
            if ( x < 1 ){
                left.push_back(1);
            }else{
                left.push_back(nums[x-1]* left[x-1]);
            }
        }

        int right = 1;
        for(int x = nums.size()-1; x >= 0 ; x--){
           sol.push_back(left[x] * right);
           right *= nums[x];
        }
        
        reverse(sol.begin(), sol.end());
       
        return sol;
    }
    */
};
