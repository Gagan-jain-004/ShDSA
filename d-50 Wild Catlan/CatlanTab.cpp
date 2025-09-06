// practice qsn leetcode 96


#include <bits/stdc++.h>
using namespace std;

int catalanRec(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += catalanRec(i) * catalanRec(n - i - 1);
    }

    return ans;
}
int catalanMem(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += catalanMem(i, dp) * catalanMem(n - i - 1, dp);
    }

    return dp[n] = ans;
}

int catlanTab(int n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }

    return dp[n];
}

int main()
{

    int n = 6;

    cout << catlanTab(n) << endl;

    cout << "to print sequence of catlan till n " << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << catlanTab(i) << " ";
    }

    return 0;
}