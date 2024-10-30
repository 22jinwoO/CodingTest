#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool Possible(int level, vector<int> diffs, vector<int> times, long long limit)
{
    ll preTime = 0;
    ll curTime = 0;
    
    for(int i = 0; i < diffs.size(); i++)
    {
        if(level >= diffs[i]) curTime += times[i];
        
        else
        {
            ll repeat = diffs[i] - level;
            curTime += times[i] + (times[i] + preTime) * repeat;
        }
        preTime = times[i];
        if(curTime > limit) return false;
    }
    
    return true;
}

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int answer = INT_MAX;
    
    int left = 0, right = 200000;
    
    while(left <= right)
    {
        int mid = (left + right) / 2;
        
        if(Possible(mid, diffs, times, limit) && mid >= 1)
        {
            right = mid - 1;
            answer = min(mid, answer);
        }
        else  left = mid + 1;
    }
    
    return answer;
}