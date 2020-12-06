#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::vector;

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

*/

void print(vector<int> const &input)
{
    for (auto i : input)
    {
        cout << i << " ";
    }
}

vector<int> twoSum(vector<int> &nums, int target)
{

    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {

        for (int j = 0; j < nums.size(); j++)
        {

            if (nums.at(i) + nums.at(j) == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

int main()
{

    vector<int> nums = {
        1,
        2,
        3,
        7,
    };
    int target = 5;

    print(twoSum(nums, target));
}