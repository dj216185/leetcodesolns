class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        for(int j = 0 ;j < nums.size();j++){
            for(int  i = j+1 ; i < nums.size();i++){
                if(nums[i]+nums[j] == target){
                   arr.push_back(j);
                   arr.push_back(i);
                    break;
                }
            }
        }
        return arr;
    }
};