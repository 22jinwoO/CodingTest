#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // 카드값 저장할 배열 선언
    vector<int> numbers;

    // 배열 값 입력
    for(int i = 0; i < 20; i++) numbers.push_back(i + 1);

    // 입력 받은 인덱스 별로 값 역순하기
    for(int i = 0; i < 10; i++)
    {
        int startIndex, endIndex;

        cin >> startIndex >> endIndex;

        reverse(numbers.begin() + startIndex - 1, (numbers.begin() + endIndex));
    }

    // 값 출력
    for(int i = 0; i < 20; i++) cout << numbers[i] << " ";
}