#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    
    string value = "";
    
    for(int i = 0; i < myStr.size(); i++)
    {
        if(myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c')
        {
            if(value != "") answer.push_back(value);
            value = "";
            continue;   
        }
        
        value += string(1, myStr[i]);
    }
    
    if(value != "") answer.push_back(value);
    
    if(answer.size() == 0) answer.push_back("EMPTY");

    return answer;
}