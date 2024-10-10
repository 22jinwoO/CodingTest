#include <bits/stdc++.h>

using namespace std;

string solution(string myString) {
    string answer = "";

    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] != 'A' && isupper(myString[i]))
        {
            answer += tolower(myString[i]);
            continue;
        }
        
        if(myString[i] == 'a')
        {
            answer += "A";
            continue;
        }
        
        answer += string(1, myString[i]);
    }
    return answer;
}