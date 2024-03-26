#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main()
{
    int n = 0;
    int m = 0;
    int answer = 0;
    string str;
    cin >> m;



    for (int i = 0; i < m; i++)
    {
        str = to_string(i);
        answer = 0;
        for (int j = 0; j < str.size(); j++)
        {
            answer += str[j]-'0';
        }

        if (m == i + answer)
        {
            answer = i;
            break;
        }
        else
            answer = 0;
    }

    cout << answer << endl;
}
