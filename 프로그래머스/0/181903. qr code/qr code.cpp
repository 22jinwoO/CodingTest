#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for(int i = 0; i < code.size(); i++)
    {
        if(i % q == r) answer += string(1, code[i]);
    }
    return answer;
}