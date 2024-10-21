#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    
    for(int i = 0; i < intervals.size(); i++)
    {
        int startIndex = intervals[i][0];
        int lastIndex = intervals[i][1];
        
        for(int j = startIndex; j <= lastIndex; j++) answer.push_back(arr[j]);
    }
    
    return answer;
}