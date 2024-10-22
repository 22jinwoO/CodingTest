#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;

    answer = arr;

    for(int i = 0; i < delete_list.size(); i++)
    {
        answer.erase(remove(answer.begin(), answer.end(), delete_list[i]), answer.end());
    }

    return answer;
}