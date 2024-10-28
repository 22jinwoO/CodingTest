#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < queries.size(); j++)
        {
            int s = queries[j][0], e = queries[j][1], k = queries[j][2];
            
            if(s <= i && i <= e && i % k == 0) arr[i]++;
        }
    }
    return arr;
}