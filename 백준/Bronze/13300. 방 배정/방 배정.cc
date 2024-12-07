#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    // 성별(0: 여, 1: 남) x 학년(1~6)
    vector<vector<int>> v(2, vector<int>(6, 0));

    for (int i = 0; i < n; i++) {
        int s, y;
        cin >> s >> y;

        // 학년을 0부터 시작하도록 조정
        y--; 
        
        v[s][y]++;
    }

    int cnt = 0;

    // 방 개수 계산
    for (int i = 0; i < 2; i++) 
    {         
        // 성별 기준
        for (int j = 0; j < 6; j++) 
        {     // 학년 기준
            if (v[i][j] > 0) cnt += (v[i][j] + k - 1) / k;  // 방 개수 계산
        }
    }

    cout << cnt << '\n';
    
    return 0;
}
