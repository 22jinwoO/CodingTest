#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sumValue = 0;
    int multipleValue = 1;
    
    for(int i =0; i < num_list.size(); i++)
    {
        sumValue+=num_list[i];
        multipleValue*=num_list[i];
    }

    if(multipleValue < sumValue * sumValue) answer = 1;
    
    else answer = 0;
    
    return answer;
}