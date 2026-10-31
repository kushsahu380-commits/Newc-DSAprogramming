#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, num;
    cin >> x >> y;
    if (x < y)
    {
        num = x;
    }
    else
    {
        num = y;
    }
    for (int i = num; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            cout << i << " is the GCD (GREATEST COMMON DIVISOR)";
            return 0;
        }
    }
    return 0;
}