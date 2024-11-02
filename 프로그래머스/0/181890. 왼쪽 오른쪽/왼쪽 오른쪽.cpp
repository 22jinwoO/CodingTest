#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    

    for(int i = 0; i < str_list.size(); i++)
    {
        
        if(str_list[i] == "l")
        {
            for(int index = 0; index < i; index++)
            {
                answer.push_back(str_list[index]);
            }
            break;
        }
    
        else if(str_list[i] == "r")
        {
            for(int index = i + 1; index < str_list.size(); index++)
            {
                answer.push_back(str_list[index]);
            }
            break;
        }    
    }
    
    
    return answer;
}