#include <bits/stdc++.h>

using namespace std;

string solution(string myString) {
    
    string answer = "";
    
    int l_Value = 'l' - '0';
    
    for(int i = 0; i < myString.size(); i++)
    {
        if(l_Value > myString[i] - '0') myString[i] = 'l';
        answer.push_back(myString[i]);
    }
    
    return answer;
}