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
    for (int i = 0; i < x; i++)
    {
        int pow = 1;
        for (int j = 0; j < i; j++)
        {
            pow *= 2;
        }
        if (pow == x)
        {
            found = true;
            break;
        }
    }
    if (found == true)
    {
        cout << x << " is the power of 2 : ";
    }
    else
    {
        cout << x << " is not the power of 2 :";
    }
    return 0;
}