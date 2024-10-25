#include <bits/stdc++.h>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    
    for(int i = s; i <= e; i++)
    {
        for(int j = i; j <= e; j++)
        {
            char value;
            value = my_string[i];
            my_string[i] = my_string[j];
            my_string[j] = value;
        }
    }
    answer = my_string;
    return answer;
}