#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, nums[10] = {}, ans = 0;

    cin >> n;

    while (n)
    {
        nums[n % 10]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        ans = max(ans, nums[i]);
    }

    ans = max(ans, (nums[6] + nums[9] + 1) / 2);
    cout << ans;
}
