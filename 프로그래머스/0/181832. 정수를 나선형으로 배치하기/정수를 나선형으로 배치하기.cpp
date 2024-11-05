#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0));
    
    int startIndex = 0, endIndex = n;
    
    enum Dir
    {
        Right,
        Down,
        Left,
        Up
    };
    Dir direction = Right;
    int num = 1;
    
    while(num <= pow(n, 2))
    {
        switch(direction)
        {
            case Right:
                for(int i = startIndex; i < endIndex; i++)
                {
                    answer[startIndex][i] = num;
                    num++;
                }
                direction = Down;
                break;
                
            case Down:
                for(int i = startIndex; i < endIndex; i++)
                {
                    if(answer[i][endIndex  - 1] != 0) continue;
                    answer[i][endIndex - 1] = num;
                    num++;
                }
                direction = Left;
                break;
                
                
            case Left:
                for(int i = endIndex - 1; i >= startIndex; i--)
                {
                    if(answer[endIndex  - 1][i] != 0) continue;
                    answer[endIndex  - 1][i] = num;
                    num++;
                }
                direction = Up;
                break;
                
            case Up:
                for(int i = endIndex - 1; i >= startIndex; i--)
                {
                    if(answer[i][startIndex] != 0) continue;
                    answer[i][startIndex] = num;
                    num++;
                }
                direction = Right;
                startIndex++;
                endIndex--;
                break;
        }
    }
    
    
    return answer;
}