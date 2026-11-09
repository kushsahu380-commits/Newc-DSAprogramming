#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    bool found = false;
    cin >> x;
    if (x < 0)
    {
        cout << "Invalid Input";
        return 0;
    }
    for (int i = 0; i < x; i++)
    {
        if (x == i * (i + 1))
        {
            found = true;
            break;
        }
    }
    if (found == true)
    {
        cout << "Pronic number : ";
    }
    else
    {
        cout << "Not a Pronic Number : ";
    }
    return 0;
}