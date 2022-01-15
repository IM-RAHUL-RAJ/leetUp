class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int high=cols-1;
        int i;
        int mid;
        int row;
        if(rows==1 && cols==1){
            if(matrix[rows-1][cols-1]==target){
                return true;
            }
            else {
                return false;
            }
        }
        for(i=0;i<rows;i++){
            if(matrix[i][cols-1]>=target){
                 row=i;
                break;
            }
        }
        if(i==rows){
            return false;
        }
        
        while(low<=high){
            mid=(low+high)/2;
            
            if(matrix[row][mid]==target){
                return true;
            }
            else if(matrix[row][mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        return false;
        
    }
};