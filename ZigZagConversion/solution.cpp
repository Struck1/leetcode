#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::vector;

/*
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this:
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
*/

/*
template <typename T>
void print(vector<T> &v)
{
    // iterator
    typename vector<T>::iterator i = v.begin();
    while (i != v.end())
    {
        cout << *i << " ";
        i++;
    }
    cout << std::endl;
}
*/

class Solution
{

public:
    string convert(string s, int numRows)
    {
        if (numRows <= 1 || numRows >= s.size() || s.size() == 1)
            return s;

        vector<string> v(numRows);
        int row = 0;
        int step = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (row == numRows - 1)
                step = -1;
            if (row == 0)
                step = 1;

            v[row] += s[i];
            row += step;
        }
        string result;
        for (int i = 0; i < numRows; i++)
        {
            result += v[i];
        }
        return result;
    }
};

int main()
{
    Solution s;
    string str = "PAYPALISHIRING";
    cout << " : " << s.convert(str, 3) << endl;
}