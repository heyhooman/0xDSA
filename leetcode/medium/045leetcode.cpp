#include <bits/stdc++.h>
using namespace std;
long int helper(vector<int> &nums, int curr, int dest, vector<int> &dp)
{
    if (curr == dest)
        return 0;
    if (dp[curr] != -1)
        return dp[curr];
    long int temp = INT_MAX;

    for (int i = 1; i <= nums[curr]; i++)
    {
        if (i + curr > dest)
            break;
        temp = min(temp, 1 + helper(nums, curr + i, dest, dp));
    }
    dp[curr] = temp;
    return temp;
}

int jump(vector<int> &nums)
{
    vector<int> dp(nums.size(), -1);
    return helper(nums, 0, nums.size() - 1, dp);
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << jump(nums);
    return 0;
}
