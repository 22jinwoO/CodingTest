#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> arr) {

    int answer = 0;
    while (true) 
    {
        vector<int> previousArr = arr;


        for (int i = 0; i < arr.size(); i++) 
        {
            if (arr[i] >= 50 && arr[i] % 2 == 0) arr[i] /= 2;
            else if (arr[i] < 50 && arr[i] % 2 == 1) arr[i] = (arr[i] * 2) + 1;
        }

        if (arr == previousArr) break;

        answer++;
    }
    
    return answer;
}