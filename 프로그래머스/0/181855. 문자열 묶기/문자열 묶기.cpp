#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> lengthCount(31, 0);

    for(int i = 0; i < strArr.size(); i++)
    {
        int strSize = strArr[i].length();
        lengthCount[strSize]++;
    }
    
        
    answer = *max_element(lengthCount.begin(), lengthCount.end());
    
    return answer;
}