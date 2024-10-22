#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b, int c) {

    int sumValue = a + b + c;
    int secondValue = sumValue * (pow(a,2) + pow(b,2) + pow(c,2));
    int thirdValue = secondValue * (pow(a,3) + pow(b,3) + pow(c,3));
    
    if(a != b && b != c && a != c) return sumValue;
    
    if((a == b || b == c || c == a) && (a != b || b != c || a!= c)) return secondValue;
    
    return thirdValue;
}