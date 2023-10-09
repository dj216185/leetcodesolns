/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.*/
vector<int> majorityElement(vector<int>& nums){
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size();){
            int temp = 0;
            int j = i;
            while(j<nums.size() && nums[i] == nums[j]){
                    j++;
                    temp++;
            }
            if(temp>floor(nums.size()/3)){
                ans.push_back(nums[i]);
            }
            i = j;
    }
    
}