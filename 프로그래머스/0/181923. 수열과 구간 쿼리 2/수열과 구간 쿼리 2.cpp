#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(int i = 0; i < queries.size(); i++)
    {
        int result = -1;
        
        int startIndex = queries[i][0];
        int lastIndex = queries[i][1];
        int compareNum = queries[i][2];
        
        for(int j = startIndex; j <= lastIndex; j++)
        {
            if(arr[j] > compareNum)
            {
                if(result < 0) result = arr[j];
                
                else result = min(result, arr[j]);
            }
        }
        
        answer.push_back(result);
    }
    
    return answer;
}