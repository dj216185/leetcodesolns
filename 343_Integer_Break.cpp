/*Given an integer n, break it into the sum of k positive integers, where k >= 2, and maximize the product of those integers.

Return the maximum product you can get.*/
int integerBreak(int n){
    if(n == 1){
        return 1;
    }
    vector<int> nums(n+1,0);
    nums[1] = 1;
    for(int i=2; i<=n+1;i++){
        for(int j=1; j < i; j++){
            nums[i] = max(nums[i],max(j*(i-j),j*nums[i-j]));
        }
    }
    return nums[n];
}