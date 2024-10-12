#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    
    vector<int> answer;
    
    answer.push_back(num_list[0]);
    
    for(int i = 1; i < num_list.size(); i++)
    {
        if(i % n == 0) answer.push_back(num_list[i]);
    }
    
    return answer;
}