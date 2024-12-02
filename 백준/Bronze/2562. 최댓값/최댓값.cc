#include <bits/stdc++.h>

using namespace std;

int main() {

    // 값과 인덱스 저장할 pair
    pair<int, int> maxValue;

    maxValue.first = 0;
    maxValue.second = 0;

    // 9개의 숫자 입력 받기
    for(int i = 1; i <= 9; i++)
    {
        int num = 0;
        cin >> num;
        
        if(num > maxValue.first)
        {
            maxValue.first = num;
            maxValue.second = i;
        }
    }

    // 값과 인덱스 출력
    cout << maxValue.first << '\n' << maxValue.second;
}