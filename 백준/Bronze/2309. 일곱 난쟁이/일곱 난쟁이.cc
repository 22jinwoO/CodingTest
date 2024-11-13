#include <bits/stdc++.h>

using namespace std;

int main() {

    // 값 저장할 배열
    vector<int> numbers;

    // 입력한 값 배열에 추가
    for(int i = 0; i < 9; i++)
    {
        int num = 0;
        cin >> num;
        numbers.push_back(num);
    }

    // 배열 값 최소값으로 정렬하기
    sort(numbers.begin(), numbers.end());


    // 모든 숫자 합한 후, 100을 빼서 여분 합 구하기
    int totalSum = accumulate(numbers.begin(), numbers.end(), 0);
    int targetSum = totalSum - 100;


    // 더해서 여분합이 나오는 인덱스 쌍 찾기
    pair<int ,int> exclude = {0, 0};

    for(int i = 0; i < 9; i++)
    {
        for(int j = i; j < 9; j++)
        {
            if(numbers[i] + numbers[j] == targetSum)
            {
                exclude = {i, j};
                break;
            }
        }
        if (exclude.first != 0) break;
    }


    // 일곱 난쟁이 찾기
    for(int i = 0; i < 9; i++)
    {
        if(i == exclude.first || i == exclude.second) continue;
        
        cout << numbers[i] << '\n';
    }
}