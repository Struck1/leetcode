#include <iostream>
#include <string>
#include <unordered_map>

using std::cout;
using std::endl;
using std::string;
using std::unordered_map;

class Solution
{
public:
    int lengthOfLongestSubstring(string &s)
    {
        int res = 0, i = 0, j = -1;
        unordered_map<char, int> m;

        while (i < s.size())
        {

            if (m.count(s[i]) && m[s[i]] > j)
            {
                cout << m[s[i]] << endl;
                j = m[s[i]];
            }
            m[s[i]] = i;
            res = std::max(res, i - j);
            ++i;
        }

        /*
        for (auto itr : m)
        {

            cout << itr.first << "  " << itr.second << endl;
        }
        
        unordered_map<char, int>::iterator f = m.find('a');
        cout << f->first << "  " << f->second << endl;
        */

        return res;
    }
};

int main()
{

    string text = "pwwkew";
    Solution s;
    cout << s.lengthOfLongestSubstring(text) << endl;

    /*

    //unordered_map Example:

    unordered_map<string, int> not_listesi;
    not_listesi["emre"] = 3;
    not_listesi["emre1"] = 5;
    not_listesi["mustafa"] = 9;
    not_listesi["mustafa"] = 88;
    not_listesi["emre3"] = 99;

    unordered_map<string, int>::iterator iter = not_listesi.find("mustafa");
    cout << "find: " << endl;
    cout << iter->first << " " << iter->second << endl;
    cout << "count: " << endl;
    cout << not_listesi.count("mustafa") << endl;

    cout << "all elements: " << endl;
    for (auto ogrenci : not_listesi)
    {
        cout << ogrenci.first << " " << ogrenci.second << endl;
    }

    */
    return 0;
}
