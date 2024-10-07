#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int solution(string my_string, string target) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int answer = 0;
    
    if(my_string.find(target) != string::npos) answer = 1;
    
    return answer;
}