#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    
    for (int i = 0; i < query.size(); i++) 
    {
        int idx = query[i];
        
        if (i % 2 == 0) arr = vector<int>(arr.begin(), arr.begin() + idx + 1);
        
        else arr = vector<int>(arr.begin() + idx, arr.end());
    }
    
    return arr;
}
