#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int value = a;

    
    for(int i = 0; i < included.size(); i++)
    {
        if(included[i] == true) answer+=value;
        value += d;
    }

    return answer;
}