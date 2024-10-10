#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(int i = 0; i < strArr.size(); i++)
    {
        for(int j = 0; j < strArr[i].size(); j++)
        {
            if(i % 2 == 1 && islower(strArr[i][j]))
            {
                strArr[i][j] = toupper(strArr[i][j]);
                continue;
            }
             
            if(i % 2 == 0 && isupper(strArr[i][j]))
            {
                strArr[i][j] = tolower(strArr[i][j]);
                continue;
            }
        }
        
        answer.push_back(strArr[i]);
    }
    
    return answer;
}