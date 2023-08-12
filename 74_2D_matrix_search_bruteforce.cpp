class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int cols = matrix[0].size();
        vector<int> arr(row*cols);
        int span = 0;
        for(int i = 0; i<row;i++){
            for(int j = 0; j<cols;j++){
                if(span <= row*cols){
                arr[span] = matrix[i][j];
                span++;
                }
            }
        }
        for(int i = 0;i<span;i++ ){
            if(target == arr[i]){
                return true;
            }
        }
        return false;
    }
};
