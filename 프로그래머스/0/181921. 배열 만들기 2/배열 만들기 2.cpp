#include <string>
#include <vector>

using namespace std;

bool isValidNumber(string num);

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for(int i = l; i <= r; i++)
    {
        string num = to_string(i);
        
        if(isValidNumber(num)) answer.push_back(i);
    }
        
    if(answer.empty()) answer.push_back(-1);
    
    return answer;
}

bool isValidNumber(string num)
{
    for(int j = 0; j < num.size(); j++)
    {
        if(num[j] != '0' && num[j] != '5') return false;
    }
    
    return true;
}