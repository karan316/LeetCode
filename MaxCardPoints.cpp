#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
    vector<int> cardPoints = {1, 79, 80, 1, 1, 1, 200, 1};
    int k = 3, sum = 0;
    int j = cardPoints.size() - 1, i = 0;
    while (i <= j && k != 0)
    {
        sum += max(cardPoints[i], cardPoints[j]);
        if (cardPoints[i] != cardPoints[j])
        {
            if (cardPoints[i] > cardPoints[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            k--;
        }
        else
        {
            if (cardPoints[i + 1] > cardPoints[j - 1])
            {
                i++;
            }
            else
            {
                j--;
            }
            k--;
        }
    }

    cout << sum;
}