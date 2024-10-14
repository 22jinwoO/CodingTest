#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string my_string) {
    
    vector<string> answer;
    string value = "";
    
    for(int i = 0; i < my_string.size(); i++)
    {
        value = my_string.substr(i, my_string.size());
        answer.push_back(value);
    }
    
    for(int i = 0; i < answer.size(); i ++)
    {
        for(int j = 0; j < answer.size(); j++)
        {
            if(answer[i] < answer[j])
            {
                string temp  = "";
                temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }
    return answer;
}