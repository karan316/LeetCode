#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "loveleetcode";
    map<char, bool> map;

    for (int i = 0; i < s.length(); i++)
    {
        if (map.find(s[i]) != map.end())
        {
            map[s[i]] = true;
            continue;
        }
        map.insert(make_pair(s[i], false));
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (map[s[i]] == false)
        {
            cout << s[i] << " " << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
}