#include <bits/stdc++.h>

using namespace std;

int solution(string binomial) {

    int answer = 0;
    
    string a,b = "";
    
    int bStartIndex = 0;
    
    for(int i = 0; i < binomial.size(); i++)
    {
       if(binomial[i] == '+' || binomial[i] == '-' || binomial[i] == '*')
       {
           bStartIndex = i;
           break;
       }
        
       a += string(1, binomial[i]);
    }

    for(int i = bStartIndex + 1; i < binomial.size(); i++) b += string(1, binomial[i]);
    
    switch(binomial[bStartIndex])
    {
        case '+':
           answer = stoi(a) + stoi(b);
           break;
            
        case '-':
            answer = stoi(a) - stoi(b);
            break;
            
        case '*':
            answer = stoi(a) * stoi(b);
            break;
    }
    
    cout << a << " " << b;
    cout << answer;
    
    return answer;
}