#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    bool found = false;
    cin >> x;
    if (x <= 1)
    {
        cout << "Not a prime number : ";
        return 0;
    }
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "Prime number : ";
    }
    else
    {
        cout << "Not a prime number :";
    }
    return 0;
}