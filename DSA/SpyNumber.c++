#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0, pro = 1;
    cin >> x;
    if (x == 0)
    {
        cout << "Spy Number : ";
        return 0;
    }
    if (x < 0)
    {
        cout<<"Invalid Input : ";
        return 0;
    }
    while (x != 0)
    {
        int n = x % 10;
        sum += n;
        pro *= n;
        x /= 10;
    }
    if (sum == pro)
    {
        cout << "Spy Number :";
    }
    else
    {
        cout << "Not a Spy Number : ";
    }
    return 0;
}