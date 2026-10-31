#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0, org, temp, digit = 0;
    cin >> x;
    org = x;
    temp = x;
    if (x == 0)
    {
        cout << x << " is Armstrong : ";
        return 0;
    }
    while (x != 0)
    {
        digit++;
        x /= 10;
    }
    while (temp != 0)
    {
        int n = temp % 10;
        int power = 1;
        for (int j = 1; j <= digit; j++)
        {
            power *= n;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == org)
    {
        cout << "Number is armstrong :";
    }
    else
    {
        cout << "Number is not armstrong : ";
    }
    return 0;
}