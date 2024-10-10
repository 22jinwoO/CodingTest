#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    
    vector<string> answer;
    string result = "";
    
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] != ' ')
        {
            result += string(1, my_string[i]);
            continue;
        }
        
        answer.push_back(result);
        result = "";
    }
    
    if(result != "") answer.push_back(result);
    
    return answer;
}