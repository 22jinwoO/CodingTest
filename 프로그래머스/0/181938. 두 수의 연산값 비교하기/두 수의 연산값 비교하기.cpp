#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b) {
    
    
    int calcul_Value = stoi(to_string(a) + to_string(b));
    
    int multiple_Value = 2 * a * b;
    
    if(calcul_Value > multiple_Value || calcul_Value == multiple_Value) return calcul_Value;
    
    else return multiple_Value;
    
}