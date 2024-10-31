#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);

    for(int i = 0; i < my_string.size(); i++) 
    {
        if(isupper(my_string[i])) answer[my_string[i] - 'A']++;
        else if(islower(my_string[i])) answer[(my_string[i] - 'a') + 26]++;
    }
    return answer;
}