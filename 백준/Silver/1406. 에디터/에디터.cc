#include <bits/stdc++.h>

using namespace std;

int main() {

    string str;

    cin >> str;

    // 연결 리스트에 문자열 저장
    list<char> text(str.begin(), str.end());

    // 커서를 리스트의 끝에 위치
    auto cursor = text.end();

    // 명령어 입력 횟수
    int n;
    
    cin >> n;

    // n 만큼 반복
    for(int i = 0; i < n; i ++)
    {
        // 명령어 문자 입력
        char command;

        cin >> command;
        
        switch (command) 
        {
            // 커서 위치 왼쪽으로 이동
            case 'L':
                if(cursor != text.begin())
                    cursor--;
                break;

            // 커서 위치 오른쪽으로 이동
            case 'D':
                if(cursor != text.end())
                    cursor++;
                break;

            // 커서 왼쪽의 문자 삭제
            case 'B':
                if(cursor != text.begin())
                {
                    cursor--;
                    cursor = text.erase(cursor);    
                }
                    
                break;

            // 커서 위치에 문자 추가
            case 'P':
                char addChar;
                cin >> addChar;
                text.insert(cursor, addChar);
                break;
        }
    }

    for(char c : text) cout << c;

    return 0;
}