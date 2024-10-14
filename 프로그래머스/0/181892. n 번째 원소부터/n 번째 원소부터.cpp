#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    int startIndex = n - 1;
    
    for(int i = startIndex; i < num_list.size(); i++)
    {
        answer.push_back(num_list[i]);
    }
    
    
    return answer;
}