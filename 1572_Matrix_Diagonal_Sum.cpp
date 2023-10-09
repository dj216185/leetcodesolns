/*Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.*/

class Solution {
    public:
        int digonalSun(vector<vector<int>>& mat){
            int temp = 0;
            int n = mat.size();
            for(int i = 0; i < n; i++){
                for(int j = 0; j<n; j++){
                    if(i==j || i == (n-j-1)){
                        temp+=mat[i][j];
                    }
                }
            }
            return temp;
        }
};