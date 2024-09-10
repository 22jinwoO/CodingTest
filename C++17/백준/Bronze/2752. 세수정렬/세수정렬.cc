
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int nums[100];

    for (int i = 0; i < 3; i++)
       cin >> nums[i];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (nums[j] > nums[i])
            {
                int temp;
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }

        }
    }

    for (int i = 0; i < 3; i++)
        cout << nums[i] << " ";

}

