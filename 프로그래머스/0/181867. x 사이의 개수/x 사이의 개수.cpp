#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    
    int valueCnt = 0;
    
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] != 'x') valueCnt++;
        
        else 
        {
            answer.push_back(valueCnt);
            valueCnt = 0;
        }
    }
    
    answer.push_back(valueCnt);
    
    return answer;
}