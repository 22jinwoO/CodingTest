#include <bits/stdc++.h>

using namespace std;

string solution(string a, string b) {

    string answer = "";
    
    while(a.size() > b.size()) b = '0' + b;
    while(b.size() > a.size()) a = '0' + a;
    
    int upNum = 0;
    
    for(int i = a.size() - 1; i > -1 ; i--)
    {
        int sum = (a[i] -'0') + (b[i] - '0') + upNum;
        
        upNum = sum / 10;
        
        
        answer += (sum % 10) + '0';
    }

    if(upNum != 0) answer += upNum + '0';
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}
