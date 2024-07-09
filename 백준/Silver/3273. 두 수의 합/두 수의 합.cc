#include <bits/stdc++.h>

using namespace std;

int n, nums[100001], x = 0, cnt = 0;
bool occur[2000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);



    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cin >> x;
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        if (x - nums[i] > 0 && occur[x - nums[i]])
            cnt++;
        occur[nums[i]] = true;
    }


    cout << cnt;
}

