class Solution {
public:
    int search(vector<int>& nums, int target) {
      int left = 0;
      int right = nums.size() -1;
      while(left <= right){
        int mid = left + (right - left)/2;
        if(target == nums[mid]){
            return mid;
        }
        if(nums[left] <= nums[mid]){
            if(nums[left] <=  target && nums[mid] > target){
                right = mid -1;
            }else{
                left = mid +1;
            }
        }else{
            if(nums[right] >= target && nums[mid] < target ){
                left = mid +1;
            }else{
                right = mid -1;
            }
        }
      }
      return -1; 
    }
    
      
      /*
        int pivot = 0;
        for(int x = 1; x < nums.size(); x++){
            if(nums[x] < nums[x-1]){
                pivot = x;
                break;
            }
        }
        int left = 0;
        int right = nums.size()-1;
        while (left <= right){
            if (nums[pivot] == target){
                return pivot;
            }
            if ( right < target){
                right = pivot - 1 ;
            }else{
                left = pivot + 1;
            }
            pivot = left + (right - left)/2;

        }
        return -1;
    }
    */

};
 