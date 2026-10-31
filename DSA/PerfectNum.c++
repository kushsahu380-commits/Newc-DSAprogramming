#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0, org;
    cin >> x;
    org = x;
    if (x <= 1)
    {
        cout << x << " is not a perfect number : ";
        return 0;
    }
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    if (org == sum)
    {
        cout << org << " is the perfect number : ";
    }
    else
    {
        cout << org << " is not the perfect number : ";
    }
    return 0;
}