#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    
    for (int i = 0; i < parts.size(); i++) {
        int start = parts[i][0];
        int end = parts[i][1];
        int length = end - start + 1;  // 추출할 길이 계산
        
        answer += my_strings[i].substr(start, length);
    }
    
    return answer;
}
