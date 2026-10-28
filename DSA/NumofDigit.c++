#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, count = 0;
    cin >> x;
    if (x == 0)
    {
        count = 1;
    }
    else
    {
        while (x != 0)
        {
            x /= 10;
            count++;
        }
    }
    cout << "Number of digits is :" << count;
    return 0;
}