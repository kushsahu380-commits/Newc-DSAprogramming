#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    bool found = false;
    cin >> x;
    if (x < 0)
    {
        cout << "Invalid Input : ";
        return 0;
    }
    if (x == 0)
    {
        cout << "Not a Duck number : ";
        return 0;
    }
    while (x != 0)
    {
        int n = x % 10;
        if (n == 0)
        {
            found = true;
        }
        x /= 10;
    }
    if (found == true)
    {
        cout << "Duck Number : ";
    }
    else
    {
        cout << "Not a Duck Number : ";
    }
    return 0;
}