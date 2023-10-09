//34. Find First and Last Position of Element in Sorted Array
/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.*/

vector<int> searchRange(vector<int>& nums,int target){
    auto start = nums.begin();
    auto end = nums.end();

    int st = lower_bound(start,end,target) - start;
    int en = upper_bound(start,end,target) - start - 1;

    if(st<=en){
        return {st,en};
    }
    else{
        return {-1,-1};
    }
}