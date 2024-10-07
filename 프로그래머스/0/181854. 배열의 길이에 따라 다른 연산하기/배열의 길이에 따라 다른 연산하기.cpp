#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    
    ios_base::sync_with_stdio(0);
    cin.tie();
    
    vector<int> answer;
    
    int start_index = 0;
    
    if(arr.size() % 2 == 0) start_index = 1;
    
    for(int i = start_index; i < arr.size(); i+=2) arr[i]+=n;
    
    answer = arr;
    
    return answer;
    
    
}
