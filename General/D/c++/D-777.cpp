#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string hashtags[t];
    for (int i = 0; i < t; i++)
    {
        cin >> hashtags[i];
    }
    for (int p1 = t - 1; p1 > 0; p1--)
    {
        if (string(hashtags[p1]) < hashtags[p1 - 1])
        {
            for (int i = 0; i < hashtags[p1-1].length(); i++)
            {
                if (hashtags[p1 - 1][i] > hashtags[p1][i])
                {
                    hashtags[p1 - 1].resize(i);
                }
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << hashtags[i] << endl;
    }
    return 0;
}