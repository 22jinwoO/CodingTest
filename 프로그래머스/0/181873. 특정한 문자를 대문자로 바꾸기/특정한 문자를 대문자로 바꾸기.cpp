#include <bits/stdc++.h>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] == alp[0])
        {
            answer+=toupper(alp[0]);
            continue;
        }
        
        answer += string(1,my_string[i]);
    }
    return answer;
}