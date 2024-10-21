#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    
    string oddValues = "";
    string evenValues = "";
        
    int answer = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        if(num_list[i] % 2 != 0) oddValues+=to_string(num_list[i]);
        else evenValues+=to_string(num_list[i]);
    }
    
    answer = stoi(oddValues) + stoi(evenValues);
    
    return answer;
}