#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 통화 목록 개수 및 통화 목록 입력 받기
    int cnt = 0;

    cin >> cnt;

    vector<int> call_list(cnt, 0);
    
    for(int i = 0; i < cnt; i++) cin >> call_list[i];


    // 영식 민식 통화 요금 구하기
    int y = 0;
    int m = 0;

    for(int i = 0; i < cnt; i++)
    {
        int num = call_list[i];
        
        while(num >= 0)
        {
            num-=30;
            y += 10;
        }

        num = call_list[i];

        while(num >= 0)
        {
            num-=60;
            m += 15;
        }
    }

    // 영식 요금이 더 저렴할 경우
    if( y < m ) cout << "Y" << " " << y;

    // 민식 요금이 더 저렴할 경우
    else if( m < y ) cout << "M" << " " << m;

    // 가격이 동일할 경우
    else cout << "Y" << " M " << y;
}