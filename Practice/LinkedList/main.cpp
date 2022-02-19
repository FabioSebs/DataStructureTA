// main.cpp
#include "linked-list.hpp"
#include <iostream>
#include <vector>

using namespace std;
using namespace dsa;

class Solution
{
public:
    void twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int x = 0; x < nums.size(); x++)
            {
                if (i == x)
                {
                    continue;
                }
                if (nums[i] + nums[x] == target)
                {
                    vector<int> result = {i, x};
                    cout << result[0] << result[1] << endl;
                }
            }
        }
    }
};

int main()
{
    Node<int> myNode(1, NULL);
    cout << "Test " << myNode.getData() << endl;

    vector<int> myNums = {5, 9, 20, 10};
    int target = 30;

    Solution mySolution;
    mySolution.twoSum(myNums, target);
}
