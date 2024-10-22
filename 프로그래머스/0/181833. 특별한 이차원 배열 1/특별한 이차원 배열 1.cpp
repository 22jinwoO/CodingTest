#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;

    for(int i = 0; i < n; i++)
    {
        vector<int> arr;
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                arr.push_back(1);
                continue;
            }

            arr.push_back(0);
        }
        answer.push_back(arr);
    }
    return answer;
}