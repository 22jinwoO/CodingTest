#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for(int i = 0; i < intStrs.size(); i++)
    {
        string value = intStrs[i].substr(s,l);

        int intValue = stoi(value);
        
        if(intValue > k) answer.push_back(intValue);
    }
    
    return answer;
}