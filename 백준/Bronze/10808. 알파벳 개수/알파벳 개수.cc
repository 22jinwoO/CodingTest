#include<bits/stdc++.h>

using namespace std;

int values[26];
int main()
{

    string inputValue;

    
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> inputValue;

    for (int i = 0; i < inputValue.length(); i++)
    {
        values[(inputValue[i] - 'a')]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        cout << values[i] << " ";
    }
}