#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;

    cin >> n >> k;
    
    vector<vector<int>> v(2, vector<int>(6, 0));

    for(int i = 0; i < n; i++)
    {
        // 성별
        int s = 0;

        // 학년
        int y = 0;

        cin >> s >> y;

        // 배열 크기 때문에 학년 --
        y--;

        // 해당 학년 성별 카운팅
        v[s][y]++;
    }

    int cnt = 0;
    
    // 1학년부터 6학년까지 방 개수 카운팅ㅋ
    for (int i = 0; i < v.size(); i++) 
    { 
        // 학년 기준
        for(int j = 0; j < v[i].size(); j++)
        {
            // 방 최대 인원 수에 맞게 떨어진다면 cnt 반영
            if(v[i][j] % k == 0) cnt += v[i][j] / k;

            // 방 최대 인원 수에 딱 맞지 않게 떨어진다면
            else
            {
                
                while(v[i][j] > k)
                {
                    v[i][j] /= k;
                    cnt++;
                }

                cnt++;
            }
        }
    }

    cout << cnt;
}