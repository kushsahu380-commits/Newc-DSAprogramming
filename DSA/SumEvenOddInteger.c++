#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, even = 0, odd = 0;
    cin >> x;
    while (x != 0)
    {
        int n = x % 10;
        if (n % 2 == 0)
        {
            even += n;
        }
        else
        {
            odd += n;
        }
        x /= 10;
    }
    cout << "Even sum = " << even << endl
         << "Odd sum = " << odd;
    return 0;
}