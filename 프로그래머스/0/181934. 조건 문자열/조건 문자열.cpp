#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    
    switch(ineq[0])
    {
        case '>':
            switch(eq[0])
            {
                case '=':
                    answer = (n >= m);
                    break;
                    
                case '!':
                    answer = (n > m);
                    break;
            }
            break;
            
            
        case '<':
            switch(eq[0])
            {
                case '=':
                    answer = (n <= m);
                    break;
                    
                case '!':
                    answer = (n < m);
                    break;
            }
            break;
    }
    
    return answer;
}