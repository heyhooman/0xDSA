#include <bits/stdc++.h>
using namespace std;
bool checkInclusion(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    vector<int> frequencys1(26, 0);
    vector<int> frequencys2(26, 0);
    if (m < n)
    {
        return false;
    }
    for (char ch : s1)
    {
        int idx = ch - 'a';
        frequencys1[idx]++;
    }
    for (int j = 0, i = 0; j < m;)
    {
        int idx = s2[j] - 'a';
        frequencys2[idx]++;
        if (j - i + 1 == n)
        {
            if (frequencys1 == frequencys2)
            {
                return true;
            }
        }
        if (j - i + 1 < n)
        {
            j++;
        }
        else
        {
            idx = s2[i] - 'a';
            frequencys2[idx]--;
            i++;
            j++;
        }
    }
    return false;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << checkInclusion(s1, s2);
    return 0;
}
