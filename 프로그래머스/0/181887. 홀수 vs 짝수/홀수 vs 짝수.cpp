#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int evenSums, oddSums;
    for(int i = 0; i < num_list.size(); i++)
    {
        if(i % 2 == 0) evenSums+=num_list[i];
        
        else oddSums += num_list[i];
    }
    
    if(evenSums >= oddSums) answer = evenSums;
    
    else answer = oddSums;
        
    return answer;
}