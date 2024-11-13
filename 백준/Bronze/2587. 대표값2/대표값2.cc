#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> numbers;

    //값 입력받기
    for(int i = 0; i < 5; i++)
    {
        int num = 0;
        cin >> num;
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());

    // 합계 구하기
    int sum = 0;

    for(int i = 0; i < numbers.size(); i++) sum += numbers[i];

    //평균 구하기
    sum /= 5;

    // 값 출력
    cout << sum << " " << numbers[2];
}