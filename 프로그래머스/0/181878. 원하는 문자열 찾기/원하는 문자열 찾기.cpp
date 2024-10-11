#include <bits/stdc++.h>

using namespace std;

int solution(string myString, string pat) {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int patIndex = 0;
    int answer = 0;
    
    // pat 문자열 길이가 myString 보다 클 경우 예외처리
    if(myString.size() < pat.size()) return 0;

    // myString 문자열 길이만큼 반복
    for(int i = 0; i < myString.size(); i++)
    {
        // 대소문자 무시하고 myString i번째 글자와 pat의 patIndex 글자가 같으면, patIndex++
        if(tolower(myString[i]) == tolower(pat[patIndex])) patIndex++;
        
        // myString 문자열 길이가 클 경우, pat 문자열이 연속적으로 나오다가 끊길 경우의 예외처리
        else patIndex = 0;
        
        // myString 문자열 길이가 커서 pat 문자열과 같은 글자들이 연속해서 나올 경우를 대비한 예외처리
        if(pat.size() == patIndex)
        {
            answer = 1;
            break;
        }
    }

    return answer;
}