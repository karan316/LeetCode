#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {2, 3, 1, 1};
    bool flag = true;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            flag = false;
    }
    if (flag == true)
    {
        cout << "true\n";
        return 0;
    }
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
            }
        }
    }
}