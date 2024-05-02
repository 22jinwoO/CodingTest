#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int numCnt; // 숫자 개수
    int questionCnt; // 질의 개수
    
    vector<int> sums (1, 0); // 합배열

    cin >> numCnt >> questionCnt;

    // 합 배열 값 할당
    for(int i = 1; i <= numCnt; i++)
    {
        int inputNum; // 입력값
        cin >> inputNum;
        sums.push_back(sums[i-1] + inputNum);
    }

    // i, j 입력 받은 후 i 번째 부터 j 번째 까지의 합 출력
    for(int n = 0; n < questionCnt; n ++)
    {
        int i, j;
        
        cin >> i >> j;
        
        cout << sums[j] - sums[i - 1] << "\n";        
    }

}