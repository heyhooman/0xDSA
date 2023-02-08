#include <bits/stdc++.h>
using namespace std;

int getAns(vector<pair<int, int>> &pair, int ind, int prev_ind, vector<vector<int>> &dp)
{

    if (ind == pair.size())
        return 0;

    if (dp[ind][prev_ind + 1] != -1)
        return dp[ind][prev_ind + 1];

    int take = 0;

    if (prev_ind == -1 || pair[ind].second >= pair[prev_ind].second)
    {
        take = pair[ind].second + getAns(pair, ind + 1, ind, dp);
    }
    int notTake = 0 + getAns(pair, ind + 1, prev_ind, dp);
    return dp[ind][prev_ind + 1] = max(notTake, take);
}

int bestTeamScore(vector<int> &scores, vector<int> &ages)
{
    int n = ages.size();
    vector<pair<int, int>> pair;
    for (int i = 0; i < n; i++)
    {
        pair.push_back({ages[i], scores[i]});
    }
    sort(pair.begin(), pair.end());
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));

    return getAns(pair, 0, -1, dp);
}
int main()
{
    int n;
    cin >> n;
    vector<int> scores(n);
    vector<int> ages(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ages[i];
    }
    cout << bestTeamScore(scores, ages);
    return 0;
}
