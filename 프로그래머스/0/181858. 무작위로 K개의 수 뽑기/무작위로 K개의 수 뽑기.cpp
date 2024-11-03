#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;

    for(int i = 0; i < arr.size(); i++) 
    {
        if(find(answer.begin(), answer.end(), arr[i]) == answer.end()) answer.push_back(arr[i]);

        if(answer.size() == k) break;
    }

    while(answer.size() < k) answer.push_back(-1);


    return answer;
}
