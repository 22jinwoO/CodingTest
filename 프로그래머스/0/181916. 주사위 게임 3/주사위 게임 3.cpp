#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b, int c, int d) {
    
    int answer = 0;
    
    vector<int> dice = {a, b, c, d};
    
    sort(dice.begin(), dice.end());
    
    // case 1
    if(dice[0] == dice[3]) answer = 1111 * dice[0];
    
    // case 2
    else if (dice[0] == dice[2] || dice[1] == dice[3]) 
    {
        int p = (dice[0] == dice[2]) ? dice[0] : dice[1];
        int q = (dice[0] == dice[2]) ? dice[3] : dice[0];
        answer = pow(10 * p + q, 2);
    }

    // case 3
    else if(dice[0] == dice[1] && dice[2] == dice[3]) answer = (dice[0] + dice[2]) * abs(dice[0] - dice[2]);
    
    // case 4
    else if(dice[0] == dice[1] || dice[2] == dice[3] || dice[1] == dice[2])
    {
        if(dice[0] == dice[1]) answer = dice[2] * dice[3];
        
        else if(dice[2] == dice[3]) answer = dice[0] * dice[1];
        
        else answer = dice[0] * dice[3];
    }
    
    else answer = dice[0];
    
    return answer;
}