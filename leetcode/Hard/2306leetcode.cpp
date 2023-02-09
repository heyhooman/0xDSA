#include <bits/stdc++.h>
using namespace std;
long long distinctPairs(vector<string> ideas)
{
    unordered_map<char, unordered_set<string>> map;
    for (auto it : ideas)
    {
        map[it[0]].insert(it.substr(1));
    }
    long int ans = 0, common;
    int distinct1, distinct2;
    for (auto ch1 : map)
    {
        for (auto ch2 : map)
        {
            if (ch1.first == ch2.first)
            {
                continue;
            }
            common = 0;
            for (auto suffix : ch1.second)
            {
                if (ch2.second.find(suffix) != ch2.second.end())
                {
                    common++;
                }
            }
            distinct1 = ch1.second.size() - common;
            distinct2 = ch2.second.size() - common;
            ans = ans + distinct1 * distinct2;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> ideas(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ideas[i];
    }
    cout << distinctPairs(ideas);
    return 0;
}

