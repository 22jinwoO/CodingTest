#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    // 숫자 두개 입력받기
    ll num1, num2;

    cin >> num1 >> num2;

    // 만약 입력 받은 숫자 값의 첫번째 값이 두번째 값보다 더 클 경우
    if(num1 > num2)
    {
        ll temp = 0;
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    // 같은 숫자일 경우
    if(num1 == num2)
    {
        cout << 0;
        return 0;
    }
    
    // 배열 길이 구하기
    ll size = num2 - (num1 + 1);

    cout << size <<'\n';

    // A와 B의 범위에 해당하는 숫자 출력
    for(ll i = num1 + 1; i < num2; i++) cout << i << " ";
    
    return 0;
}