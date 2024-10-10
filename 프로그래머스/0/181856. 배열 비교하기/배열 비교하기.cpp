#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    
    int answer = 0;
    
    if (arr1.size() != arr2.size()) {
        return arr1.size() > arr2.size() ? 1 : -1;
    }
    
    int arr1_Sum = 0, arr2_Sum = 0;
    
    for(int i = 0; i < arr1.size(); i ++)
    {
        arr1_Sum += arr1[i];
        arr2_Sum += arr2[i];
    }
  
    
    if(arr1_Sum == arr2_Sum) return answer;
    

    return arr1_Sum > arr2_Sum ? 1 : -1;


}