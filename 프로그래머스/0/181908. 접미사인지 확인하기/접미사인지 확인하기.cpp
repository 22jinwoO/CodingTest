#include <bits/stdc++.h>

using namespace std;

int solution(string my_string, string is_suffix) {
    
    int answer = 0;
    int startIndex = my_string.size() - is_suffix.size();
    int sameValue = 0;

    for(int i = startIndex; i < my_string.size(); i++)
    {
        if(my_string[i] == is_suffix[sameValue]) sameValue++;
    }

    if(sameValue == is_suffix.size()) answer = 1;
    
    return answer;
}