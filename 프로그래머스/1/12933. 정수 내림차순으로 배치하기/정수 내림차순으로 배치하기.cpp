#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    
    long long answer = 0;
    
    string ns = to_string(n);
    
    cout << ns << endl;
    
    int idx = 0;

    // 버블 정렬
    for(int i = 0; i <ns.size()-1; i++)
    {
        for(int j = 0; j < ns.size()-1-i; j++)
        {
            if(ns[j]<ns[j+1])
            {
                int temp = 0;
                temp = ns[j+1];
                ns[j+1] = ns[j];
                ns[j] = temp;
            }
        }
    }

    answer=stoll(ns); 
    
    cout<<answer<<endl;
    
    return answer;

}


