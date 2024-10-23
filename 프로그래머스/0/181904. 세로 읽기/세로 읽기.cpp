#include <bits/stdc++.h>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    vector<string> str;
    string value = "";
    for(int i = 0; i < my_string.size(); i++)
    {
        if(i != 0 && i % m == 0)
        {
            str.push_back(value);
            value = "";
        }
        value += string(1, my_string[i]);
    }
    
    
    if(!value.empty()) str.push_back(value);
    
    for(int i = 0; i < str.size(); i++)
    {
        answer += string(1 ,str[i][c-1]);
    }

    return answer;
}