#include <bits/stdc++.h>

using namespace std;

bool CheckSize(int x, int y, int size, vector<vector<string>> park)
{
    if(x + size > park.size() || y + size > park[x].size()) return false;
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++) if(park[x+i][y+j] != "-1") return false;
    }
    
    return true;
}

int solution(vector<int> mats, vector<vector<string>> park) {

    sort(mats.rbegin(), mats.rend()); // 내림차순 정렬
    
    int result = -1;

    for(int i = 0; i < park.size(); i++)
    {
        for(int j = 0; j < park[i].size(); j++)
        {
            if(park[i][j] == "-1")
            {
                for (int size : mats)
                {
                    if(CheckSize(i, j, size, park))
                    {
                        result = max(result, size);
                        break;
                    }
                }
            }
        }
    }
    return result;
}
