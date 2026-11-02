#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0, org;
    cin >> x;
    org = x;
    if (x <= 0)
    {
        cout << "Invalid input";
        return 0;
    }
    while (x != 0)
    {
        int n = x % 10;
        sum += n;
        x /= 10;
    }
    if (org % sum == 0)
    {
        cout << "It is a Harshad Number : ";
    }
    else
    {
        cout << "It is not a Harshad Number : ";
    }
    return 0;
}