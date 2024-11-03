#include <bits/stdc++.h>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    
    for(int i = 0; i < queries.size(); i++)
    {
        int startIndex = queries[i][0];
        int lastIndex = queries[i][1];
        
        reverse(my_string.begin() + startIndex, my_string.begin() + lastIndex + 1);
    }
    
    return my_string;
}