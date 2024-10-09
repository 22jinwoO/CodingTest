#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b) {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int answer = 0;
    if(a % 2 != 0 && b % 2 != 0) answer = a*a + b*b;
    
    else if(a % 2 != 0 || b % 2 != 0) answer = 2 * (a + b);
    
    else answer = abs(a - b);
    
    return answer;
}