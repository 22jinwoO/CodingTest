#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string str1, str2;
        
        cin >> str1 >> str2;

        // 소문자 알파벳 배열 1
        int arr1[26] ={0};

        // 소문자 알파벳 배열 2
        int arr2[26] ={0};

        // 문자열 길이가 같을 때
        if(str1.size() == str2.size())
        {
            // 첫번째 문자열 알파벳 체크
            for(int i = 0; i < str1.size(); i++)
            {
                int index = str1[i] - 'a';
                arr1[index]++;
            }

            // 두번째 문자열 알파벳 체크
            for(int i = 0; i < str2.size(); i++)
            {
                int index = str2[i] - 'a';
                arr2[index]++;
            }

            // 문자열 위치 바꿔도 문제 없는지 확인
            bool canChange = true;
            
            // 알파벳 배열 비교
            for(int i = 0; i < 26; i++)
            {
                // 동일한 알파벳이 존재하지 않을 경우
                if(arr1[i] != arr2[i])
                {
                    canChange = false;
                    break;
                }
            }

            if(canChange) cout << "Possible"<< '\n';

            else cout << "Impossible"<< '\n';
        }

        else cout << "Impossible"<< '\n';
    }
}