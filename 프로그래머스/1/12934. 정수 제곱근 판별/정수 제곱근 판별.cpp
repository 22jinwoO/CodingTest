#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long a = sqrt(n);
    cout << a << endl;
    if(pow(a,2)==n)
    {
        answer=pow(a+1,2);
    }

    cout << answer <<endl;
    if(answer==0)
        answer=-1;
    
    return answer;
}