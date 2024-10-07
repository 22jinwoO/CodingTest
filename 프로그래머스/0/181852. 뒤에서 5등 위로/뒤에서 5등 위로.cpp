#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        for(int j = i+1; j < num_list.size(); j++)
        {
            if(num_list[i] > num_list[j])
            {
                int temp = 0;
                temp = num_list[i];
                num_list[i] = num_list[j];
                num_list[j] = temp;
            }
        }
    }
    for(int i = 5; i < num_list.size(); i++)
    {
        answer.push_back(num_list[i]);
    }
    
    return answer;
}