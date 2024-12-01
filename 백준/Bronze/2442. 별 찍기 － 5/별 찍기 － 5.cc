#include <bits/stdc++.h>

using namespace std;

int main() {

    int num = 0;
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        for(int j = 0; j < num -i; j++) cout << " ";
        for(int t = 0; t < 2 * i - 1; t++) cout << "*";
        cout << " \n";
    }
}