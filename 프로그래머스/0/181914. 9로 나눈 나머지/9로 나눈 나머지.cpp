#include <bits/stdc++.h>

using namespace std;

int solution(string number) {
    int answer = 0;
    
    for(int i = 0; i < number.size(); i++)
    {
        answer+=stoi(string(1,number[i]));
    }
    answer %= 9;
    
    return answer;
}