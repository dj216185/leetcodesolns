/*Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.*/
class Solution{
    public:
        int numIdenticalPairs(int nums){
            unordered_map<int, int> temp;
            int ans = 0;
            for(int n:nums){
                ans += temp[n]++;
            }
            return ans;
        }
};