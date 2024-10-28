#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    
    vector<int> answer;
    
    int a = slicer[0], b = slicer[1] + 1, c = slicer[2];
    
    switch(n)
    {
        case 1:
            answer = vector<int>(num_list.begin(), num_list.begin() + b);
            break;
            
        case 2:
            answer = vector<int>(num_list.begin() + a, num_list.end());
            break;
            
        case 3:
            answer = vector<int>(num_list.begin() + a, num_list.begin() + b);
            break;
            
        case 4:
            for(auto i = num_list.begin() + a; i < num_list.begin() + b; i+=c) answer.push_back(*i);
            break;
    }
    return answer;
}