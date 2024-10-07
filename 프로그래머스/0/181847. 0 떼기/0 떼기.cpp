#include <bits/stdc++.h>

using namespace std;

string solution(string n_str) {
    
    ios_base::sync_with_stdio(0);
    cin.tie();
    
    string answer = "";
    
    int index = 0;
    
    for(int i = 0; i < n_str.length(); i++)
    {
        if(n_str[0] == '0' && n_str[i] != '0')
        {
            index = i;
            n_str.erase(n_str.begin(), n_str.begin() + index);
            cout << n_str << endl;
            
            break;
        }
    }
    
    answer = n_str;
    
    return answer;
}