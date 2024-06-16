
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, x, values[10005];
	
	cin >> n >> x;

	for (int i = 0; i < n; i++)
	{
		cin >> values[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (values[i] < x)
			cout << values[i] << ' ';
	}

}

