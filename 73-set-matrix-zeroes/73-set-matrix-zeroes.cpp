class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool row=false,col=false;
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        for(int i=0;i<rowSize;i++){
            if(matrix[i][0]==0){
                row=true;
            }
        }
        for(int j=0;j<colSize;j++){
            if(matrix[0][j]==0){
                col=true;
            }
        }
        for(int i=1;i<rowSize;i++){
            for(int j=1;j<colSize;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<rowSize;i++){
            if(matrix[i][0]==0){
                for(int j=1;j<colSize;j++){
                    matrix[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<colSize;i++){
            if(matrix[0][i]==0){
                for(int j=1;j<rowSize;j++){
                    matrix[j][i]=0;
                }
            }
        }
        
        if(row==true){
            for(int i=0;i<rowSize;i++){
                matrix[i][0]=0;
            }
        }
         if(col==true){
            for(int i=0;i<colSize;i++){
                matrix[0][i]=0;
            }
        }
        
    }
};