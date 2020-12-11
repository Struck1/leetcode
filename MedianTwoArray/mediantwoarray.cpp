#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::sort;
using std::vector;

/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Input: nums1 = [2], nums2 = []
Output: 2.00000
Input: nums1 = [0,0], nums2 = [0,0]
Output: 0.00000
*/

class Solution
{

public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        // vector<int> mergeVector;

        double median;
        double median2;
        double median3;
        double num = 2;
        double res;

        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        sort(nums1.begin(), nums1.end());
        if (nums1.size() % 2 == 1)
        {
            median = (nums1.size() + 1) / num;
            median -= 1;

            if (nums1[median])
                res = nums1[median];
            return res;
        }
        else
        {
            median2 = nums1.size() / 2;
            median3 = median2 - 1;
            res = (nums1[median2] + nums1[median3]) / num;
            return res;
        }

        return res;
    }
};

int main()
{
    vector<int> nums1 = {1, 2, 3, 7, 8, 9}; // 1 2 3 7 8 9 size = 6
    vector<int> nums2 = {2, 3};

    Solution s;
    cout << "result : " << s.findMedianSortedArrays(nums1, nums2);
}
