#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, num, gcd;
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
            gcd = i;
            break;
        }
    }
    long long lcm = (1LL * x * y) / gcd;
    cout << "LCM = " << lcm;
    return 0;
}