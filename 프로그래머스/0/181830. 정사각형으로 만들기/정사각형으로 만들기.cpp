#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    
    while(arr.size() > arr[0].size()) for(int i = 0; i < arr.size(); i++) arr[i].push_back(0);

    if(arr.size() < arr[0].size())
    {
        while(arr.size() != arr[0].size())
        {
            vector<int> addVector(arr[0].size());
        
            arr.push_back(addVector);    
        }
    }
    
    return arr;
}