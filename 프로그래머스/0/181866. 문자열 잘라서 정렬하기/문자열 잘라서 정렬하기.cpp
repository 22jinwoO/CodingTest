#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string myString) {
    
    vector<string> answer;
    
    string value ="";
    
    // x 기준으로 문자열 나누기
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] == 'x')
        {
            if(!value.empty())
            {
                answer.push_back(value);
                value = "";    
            }
            continue;
        }
        
        value += myString[i];
    }
    
    if(!value.empty()) answer.push_back(value);
    
    // 문자열 나눈 값들 사전순으로 열거하기
    sort(answer.begin(), answer.end());
    
    return answer;
}