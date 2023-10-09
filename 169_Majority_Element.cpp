/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.*/

int majorElement(vector<int>& nums){
    int cand = 0;
    int count = 0;
    for(int num:nums){
        if(count == 0){
                cand = num;
            }

        if(num == cand){
            count++;
        }
        else{
            count--;
        }
        count = 0;
        for(num:nums){
            if(num = cand){
                count++;
            }
        }
        if(count > nums.size() / 2){
            return cand;
        }
        return -1;
    }
