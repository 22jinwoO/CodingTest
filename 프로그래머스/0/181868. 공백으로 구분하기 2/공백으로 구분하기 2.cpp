#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string my_string) {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<string> answer;
    
    string result_Value = "";
    
    for(int i = 0; i < my_string.size(); i++)
    {


        if(my_string[i] != ' ') result_Value+=string(1, my_string[i]);
        
        else
        {
            if(result_Value!="") answer.push_back(result_Value);
            result_Value = "";
        }
    }
    
     // 마지막에 result_Value가 비어 있지 않으면 추가
    if (!result_Value.empty()) {
        answer.push_back(result_Value);
    }
    
    return answer;
}