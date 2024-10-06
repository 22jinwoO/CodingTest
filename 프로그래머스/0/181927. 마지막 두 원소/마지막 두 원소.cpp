#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    answer = num_list;
    int lastNum, beforeLastNum;
    
    lastNum = answer[answer.size()-1];

    beforeLastNum = answer[answer.size()-2];

    if(lastNum > beforeLastNum)
    {
        answer.push_back(lastNum - beforeLastNum);
        return answer;
    }
    
    answer.push_back(lastNum * 2);
    return answer;        
    
}