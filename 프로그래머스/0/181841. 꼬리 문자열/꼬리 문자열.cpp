#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> str_list, string ex) {
    
    string answer = "";
    
    // 문자열 인덱스마다 ex에 포함된 문자가 있는지 확인
    for(int i = 0; i < str_list.size(); i++)
    {
        // 포함된 문자가 없으면 answer에 +, 있으면 추가 x
        if(str_list[i].find(ex) == string::npos) answer+=str_list[i];
    }
    
    
    
    return answer;
}