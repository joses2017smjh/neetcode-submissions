class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lowvector = 0;
        int highvector = matrix.size()-1;
        int row =-1;
        while(lowvector <= highvector){
            int middle = lowvector + (highvector - lowvector)/2;
            if(target < matrix[middle].front()){
                                highvector= middle - 1;

            }else if(matrix[middle].back()< target){
                lowvector= middle +1;
            }else{
                row = middle;
                break;
            }

        }
        if (row == -1) return false;
        int low = 0;
        int high = matrix[row].size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(target == matrix[row][mid]){
                return true;
            }
            if(target > matrix[row][mid]){
                low = mid +1;
            }else{
                high = mid - 1;
            }
        }
    
    return false;
    }
};
