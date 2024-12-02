#include <bits/stdc++.h>

using namespace std;

int main() {

    int num = 0;

    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        for(int j = i; j < num; j++) cout << " ";
        for(int j = 0; j < 2 * i - 1; j++) cout << "*";
        cout << "\n";
    }
    
    
    for(int i = num - 1; i >= 1; i--)
    {
        for(int j = i; j < num; j++) cout << " ";
        for(int j = 0; j < 2 * i - 1; j++) cout << "*";
        cout <<"\n";
    }
}