// Given an array of integers arr.

// We want to select three indices i, j and k where (0 <= i < j <= k < arr.length).

// Let's define a and b as follows:

// a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]
// b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]
// Note that ^ denotes the bitwise-xor operation.

// Return the number of triplets (i, j and k) Where a == b.

// Example 1:

// Input: arr = [2,3,1,6,7]
// Output: 4
// Explanation: The triplets are (0,1,2), (0,2,2), (2,3,4) and (2,4,4)

#include <bits/stdc++.h>

using namespace std;

// kmjp solution
int main()
{
    vector<int> arr = {2, 3, 1, 6, 7};
    int ret = 0;
    int x, y, z;
    int N = arr.size();
    for (x = 0; x < N; x++)
    {
        int a = 0;
        for (y = x; y < N; y++)
        {
            a ^= arr[y];
            int b = 0;
            for (z = y + 1; z < N; z++)
            {
                b ^= arr[z];
                if (a == b)
                    ret++;
            }
        }
    }
    cout << ret << endl;
}