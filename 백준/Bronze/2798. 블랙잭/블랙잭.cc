#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n=0;    // 카드 개수
    int m=0;    // 카드 개수의 총합
    int num=0;    // 카드의 숫자
    int answer = 0;    // 카드 숫자의 총합
    cin >> n >> m;

    vector<int> countVec;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        countVec.push_back(num);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            for (int k= 2; k < n; k++)
            {
                int sum = 0;

                sum=countVec[i] + countVec[j] + countVec[k];

                if (m >= sum&&sum>=answer&& countVec[i]!= countVec[j]&& countVec[i]!= countVec[k]&& countVec[j]!= countVec[k])
                {
                    answer = sum;
                }
            }
        }
    }
    cout << answer << endl;
}

