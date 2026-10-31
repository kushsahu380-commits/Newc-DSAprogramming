#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    bool found = false;
    cin >> x;
    for (int i = 0; i * i <= x; i++)
    {
        if (i * i == x)
        {
            found = true;
            break;
        }
    }
    if (found == true)
    {
        cout << "Perfect Square :";
    }
    else
    {
        cout << "Not a perfect square : ";
    }
    return 0;
}