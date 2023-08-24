vector<int> twoSum(vector<int> &nums, int target)
{
    vector<vector<int>> arr;
    int n = nums.size();
    int left = 0, right = n - 1;
    for (int i = 0; i < n; ++i)
        arr.push_back({nums[i], i});
    sort(begin(arr), end(arr));

    while (left < right)
    {
        int sum = arr[left][0] + arr[right][0];
        if (sum == target)
            return {arr[left][1], arr[right][1]};
        if (sum < target)
        {
            ++left;
        }
        else
        {
            --right;
        }
    }
    return {};
}