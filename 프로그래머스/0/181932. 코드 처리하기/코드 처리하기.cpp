#include <bits/stdc++.h>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    
    for(int i = 0; i < code.size(); i++)
    {
        if(code[i] == '1')
        {
            mode = !mode;
            continue;
        }
        
        switch(mode)
        {
            case 0:
                if(i % 2 == 0) answer += code[i];
                break;
                                
            case 1:
                if(i % 2 != 0) answer += code[i];
                break;
        }
    }
    
    if(answer.empty()) answer = "EMPTY";
    
    return answer;
}