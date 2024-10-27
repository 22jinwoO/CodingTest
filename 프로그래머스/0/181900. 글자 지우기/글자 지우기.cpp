#include <bits/stdc++.h>

using namespace std;

string solution(string my_string, vector<int> indices) {
    
    sort(indices.rbegin(), indices.rend());
    
    for(int i = 0; i < indices.size(); i++)
    {
        my_string.erase(my_string.begin() + indices[i]);
    }
    
    return my_string;
}