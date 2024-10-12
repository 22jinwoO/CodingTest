#include <bits/stdc++.h>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.size(); i++) answer += string(1, toupper(myString[i]));
    return answer;
}