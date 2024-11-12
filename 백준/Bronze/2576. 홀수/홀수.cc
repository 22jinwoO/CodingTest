#include <bits/stdc++.h>

using namespace std;

int main() {

    int playCnt = 0;

    vector<int> numbers;

    // 7개 숫자 입력받기
    while( playCnt < 7)
    {
        int num = 0;

        cin >> num;

        // 홀수인지 확인하기
        if( num != 0 && num % 2 != 0) numbers.push_back(num);

        // 횟수 증가
        playCnt++;
    }

    // 홀수 값 없었으면 -1 반환하기
    if(numbers.size() == 0)
    {
        cout << -1;
        return 0;
    }

    // 홀수 값 있으면 핪과 최솟값 반환하기ㅎ
    else
    {
        int sum = 0;
        
        sort(numbers.begin(), numbers.end());
        
        for(int i = 0; i < numbers.size(); i++) sum += numbers[i];

        cout << sum << '\n'<< numbers[0];

        return 0;
    }
}