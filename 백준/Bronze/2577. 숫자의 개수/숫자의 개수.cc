#include <bits/stdc++.h>

using namespace std;

int nums[10];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;



    cin >> a >> b >> c;

    int value = a * b * c;

    string strValue = to_string(value);

    for (int i = 0; i < strValue.length(); i++)
    {
        nums[strValue[i] - '0']++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << '\n';
    }
}
