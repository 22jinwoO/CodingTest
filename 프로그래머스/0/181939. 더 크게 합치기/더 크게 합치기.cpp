#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int firstValue = stoi(to_string(a) + to_string(b));
    int secondValue = stoi(to_string(b) + to_string(a));
    
    if(firstValue == secondValue || firstValue > secondValue) return firstValue;

    return secondValue;
}