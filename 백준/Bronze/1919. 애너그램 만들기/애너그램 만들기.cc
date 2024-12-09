#include <bits/stdc++.h>

using namespace std;

int main() {

    // 첫번째 단어
    string str1;

    // 두번째 단어
    string str2;

    // 단어 입력
    cin >> str1;
    cin >> str2;

    // 소문자 배열
    int arr1[26] = {0};
    int arr2[26] = {0};

    // str1 소문자 체크
    for(int i = 0; i < str1.size(); i++)
    {
        int index = str1[i] - 'a';

        arr1[index]++;
    }

    // str2 소문자 체크
    for(int i = 0; i < str2.size(); i++)
    {
        int index = str2[i] - 'a';

        arr2[index]++;
    }

    // 카운트 증가
    int cnt = 0;
    
    for(int i = 0; i < 26; i++)
    {
        // 같은 글자이면 패스
        if(arr1[i] == arr2[i]) continue;

        // 소문자 카운트가 더 많은 곳에서 뺀 값 총 카운트에 더하기
        if(arr1[i] > arr2[i]) cnt += (arr1[i] - arr2[i]);

        else if(arr2[i] > arr1[i]) cnt += (arr2[i] - arr1[i]);
    }

    cout << cnt;
}