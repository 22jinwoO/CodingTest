#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCnt = 0;
    cin >> testCnt;

    for(int i = 1; i <= testCnt; i++)
    {
        for(int j = 0; j < i; j++) cout << "*";

        if(testCnt > i) cout << '\n';
    }
}