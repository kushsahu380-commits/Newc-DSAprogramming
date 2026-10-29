#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, even = 0, odd = 0;
    cin >> x;
    if (x == 0)
    {
        even = 1;
    }
    while (x != 0)
    {
        int n = x % 10;
        if (n % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        x /= 10;
    }
    cout << "Even = " << even << endl
         << "Odd = " << odd;
    return 0;
}