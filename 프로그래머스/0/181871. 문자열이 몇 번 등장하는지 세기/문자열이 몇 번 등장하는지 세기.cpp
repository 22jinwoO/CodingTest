#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    
    
    // 첫글자 같으면 같은지 확인
    for(int i = 0; i < myString.size(); i++)
    {
        int sameValue = 0;
        
        if(myString[i] == pat[0])
        {
            for (int j = 0; j < pat.size(); j++) 
            {
                if (myString[i + j] == pat[j]) sameValue++;
            }    
        }
        
        if(sameValue == pat.size()) answer++;
    }
    
    return answer;
}