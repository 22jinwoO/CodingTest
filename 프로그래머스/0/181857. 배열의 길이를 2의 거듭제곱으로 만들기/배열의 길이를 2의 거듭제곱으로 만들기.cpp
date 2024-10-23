#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int value = 0;    
    
    //if(arr.size() & arr.size()-1) return arr;
    
    cout << (arr.size() & arr.size()-1) << '\n';
    while (arr.size() & arr.size()-1)
    {
        cout << "와일문 실행중" <<'\n';
        arr.push_back(0);
    }
    
    answer = arr;
        
    return answer;
}