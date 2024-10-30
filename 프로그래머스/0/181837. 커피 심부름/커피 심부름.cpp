#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    for(int i = 0; i < order.size(); i++)
    {
        bool isIceAme = order[i] == "iceamericano" || order[i] == "americanoice" || order[i] == "anything" || order[i] == "americano";
        
        bool isHotAme = order[i] == "hotamericano" || order[i] == "americanohot";

        if(isIceAme || isHotAme) answer += 4500;
        
        else answer += 5000;
        
    }
    
    
    return answer;
}