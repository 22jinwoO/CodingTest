#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCnt = 0;
    cin >> testCnt;

    // A + B 출력
    for(int i = 0; i < testCnt; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << a + b << '\n';
    }
}