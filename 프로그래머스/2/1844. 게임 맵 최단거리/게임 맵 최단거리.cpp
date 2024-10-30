#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int solution(vector<vector<int> > maps)
{
    int n = maps.size();
    int m = maps[0].size();
    
    int board[502][502];
    int dist[502][502];
    
    int dirX[4] = {1, 0, -1, 0};
    int dirY[4] = {0, 1, 0, -1};
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            board[i][j] = maps[i][j];
            dist[i][j] = -1;
        }
            
    queue<pair<int, int>> Q;
    
    Q.push({0, 0});
    dist[0][0] = 1;
    
    while(!Q.empty())
    {
        pair<int, int> cur = Q.front(); Q.pop();
        
        if(cur.X == n - 1 && cur.Y == m - 1) return dist[cur.X][cur.Y];
        for(int i = 0; i < 4; i++)
        {
            int nextX = cur.X + dirX[i];
            int nextY = cur.Y + dirY[i];
            
            if(nextX < 0 || nextX >= n || nextY < 0 || nextY >= m) continue;
            if(board[nextX][nextY] == 0 || dist[nextX][nextY] != -1) continue;
            
            dist[nextX][nextY] = dist[cur.X][cur.Y]+ 1;
            Q.push({nextX, nextY});
        }
    }
    
    return -1;
}