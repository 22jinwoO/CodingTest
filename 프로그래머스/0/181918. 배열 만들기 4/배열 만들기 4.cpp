#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    
    vector<int> stk;
    
    cout << stk.size() << '\n';
    for(int i = 0; i < arr.size();)
    {
        if(stk.empty())
        {
            stk.push_back(arr[i]);
            i++;
        }
        
        else if(!stk.empty() && stk.back() < arr[i])
        {
            stk.push_back(arr[i]);
            i++;
        }
        
        else if(stk.back() >= arr[i]) stk.pop_back();
    }
    
    for(int i = 0; i < stk.size(); i++) cout << stk[i] << " ";
    return stk;
}