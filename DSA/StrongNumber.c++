#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0, org;
    cin >> x;
    org = x;
    if (x == 0)
    {
        cout << x << " is not a strong number :";
        return 0;
    }
    if (x < 0)
    {
        cout << "Input is invalid : ";
        return 0;
    }
    while (x != 0)
    {
        int n = x % 10;
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        sum += fact;
        x /= 10;
    }
    if (org == sum)
    {
        cout << org << " is the strong number : ";
    }
    else
    {
        cout << org << " is the not strong number : ";
    }
    return 0;
}