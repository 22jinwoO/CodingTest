#include <bits/stdc++.h>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int numCnt = 4;
    int playCnt = 0;
    vector<int> numbers;

    // 3회 반복
    while(playCnt < 3)
    {

        
        // 윳 숫자 입력받기
        for(int i = 0; i < numCnt; i++)
        {
            int num = 0;
            cin >> num;
            numbers.push_back(num);
        }


        // 윳 숫자 정렬
        sort(numbers.begin(), numbers.end());

        bool isDo = numbers[0] == 0 && numbers[0] != numbers[1];
        bool isGae = numbers[0] == 0 && numbers[1] != numbers[2];
        bool isGurl = numbers[0] == 0 && numbers[2] != numbers[3];
        bool isYut = numbers[0] == 0 && numbers[3] == 0;
        bool isMo = numbers[0] == 1 && numbers[3] == 1;
    
        if(isDo) cout << "A" << '\n';
        else if(isGae) cout << "B"<< '\n';
        else if(isGurl) cout << "C"<< '\n';
        else if(isYut) cout << "D"<< '\n';
        else if(isMo) cout << "E"<< '\n';
        
        numbers.clear();
        playCnt++;
    }
}