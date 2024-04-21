#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;

    int inputNum = 0;

    int result = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> inputNum;
        nums.push_back(inputNum);
    }

    if (nums[0] == nums[1] && nums[1] == nums[2] && nums[2] == nums[0])
        result = 10000 + (nums[0] * 1000);

    else if (nums[0] == nums[1] || nums[1] == nums[2] || nums[2] == nums[0])
    {
        if(nums[0] == nums[1])
            result = 1000 + (nums[0] * 100);
            
        else if (nums[1] == nums[2])
            result = 1000 + (nums[1] * 100);

        else if (nums[2] == nums[0])
            result = 1000 + (nums[2] * 100);
    }
        

    else
    {
        int maxValue = 0;

        for (int i = 0; i < 3; i++)
        {
            if (nums[i] > maxValue)
                maxValue = nums[i];
        }

        result = maxValue * 100;
    }

    cout << result;
}
