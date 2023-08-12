class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (matrix.empty() || matrix[0].empty())
            return false;
        int low = 0, row = matrix.size() - 1;
        while (low <= row)
        {
            int mid = (low + row) / 2;
            if (matrix[mid][0] == target)
            {
                return true;
            }
             if(matrix[mid][0] < target){
                low = mid + 1;}
            else {
                row = mid - 1;}
        }
         if(row == -1){
            return false;}
        int r = row;
        low = 0, row = matrix[0].size() - 1;
        while(low <= row){
            int mid = (low + row)/2;
            if(matrix[r][mid] == target)
                {return true;}
            if(matrix[r][mid] < target)
                {low = mid + 1;}
            else 
                {row = mid - 1;}
        }
        return false;
    }
};