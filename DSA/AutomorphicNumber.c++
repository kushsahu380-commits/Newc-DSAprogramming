#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, org, count2 = 0, count1 = 0;
    cin >> x;
    org = x;
    long long sq = 1LL * x * x;
    if (x < 0)
    {
        cout << "Invalid Input :  ";
        return 0;
    }
    while (x != 0)
    {
        count1++;
        x /= 10;
    }
    while (org != 0)
    {
        int m = org % 10, n = sq % 10;
        if (m == n)
        {
            count2++;
        }
        org /= 10;
        sq /= 10;
    }
    if (count1 == count2)
    {
        cout << "Automorphic Number : ";
    }
    else
    {
        cout << "Not an Automorphic number : ";
    }
    return 0;
}