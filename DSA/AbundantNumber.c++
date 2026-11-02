#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0, org;
    cin >> x;
    org = x;
    if (x <= 0)
    {
        cout << "Invalid Input : ";
        return 0;
    }
    for (int i = 1; i <= x - 1; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    if (sum > org)
    {
        cout << "Abundant Number : ";
    }
    else
    {
        cout << "Not an Abundant Number :  ";
    }
    return 0;
}