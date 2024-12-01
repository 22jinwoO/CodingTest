#include <bits/stdc++.h>

using namespace std;

int main() {

    int num = 0;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        int j = 0;
        for(; j < i; j++) cout << " ";
        for(; j < num; j++) cout << "*";
        
        cout << '\n';
    }
}