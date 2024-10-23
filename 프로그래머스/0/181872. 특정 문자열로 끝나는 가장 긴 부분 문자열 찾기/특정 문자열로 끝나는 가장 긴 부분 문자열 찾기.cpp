#include <bits/stdc++.h>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int lastIndex= 0;
    for(int i = 0; i < myString.size(); i++)
    {
        int sameValue = 0;
        if(myString[i] == pat[0])
        {
            for(int j = 0; j < pat.size(); j++)
            {
                if(myString[i + j] == pat[j]) sameValue++;
            
                if(sameValue == pat.size()) lastIndex = i + j;
                

            }
        }
    }

    for(int i = 0; i <= lastIndex; i ++) answer += string(1, myString[i]);
    
    return answer;
}