#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    
    vector<string> answer;
    
    for(int i = 0; i < picture.size(); i++)
    {
        string result = "";
        
        for(int j = 0; j < picture[i].size(); j++)
        {
            result += string(k, picture[i][j]);
        }
        
        for(int repeat = 0; repeat < k; repeat++)
        {
            answer.push_back(result);    
        }        
    }
    
    return answer;
}