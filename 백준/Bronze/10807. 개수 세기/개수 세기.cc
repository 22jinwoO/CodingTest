#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, nums[101], v, ans = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cin >> v;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == v) ans++;
        
    }
    cout << ans;
}