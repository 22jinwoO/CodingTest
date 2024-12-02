#include <bits/stdc++.h>

using namespace std;

int main() {
    int num = 0;
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        int j = 1;


        for(; j <= i; j++) cout << "*";

        for(; j <= num; j++) cout << " ";


        j = num;
        
        for(; j > i; j--) cout << " ";

        for(; j >= 1; j--) cout << "*";
        
        cout << '\n';
    }

    for(int i = num - 1; i >= 1; i--)
    {
        int j = 1;

        for(; j <= i; j++) cout << "*";

        for(; j <= num; j++) cout << " ";


        j = num;
        
        for(; j > i; j--) cout << " ";

        for(; j >= 1; j--) cout << "*";
        
        cout << '\n';
    }

}