#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x;
    y = x;
    cout << "First Digit = ";
    while (x != 0)
    {
        if (x < 10)
        {
            cout << x << endl;
            break;
        }
        x /= 10;
    }
    cout << "Last Digit = " << y % 10;
    return 0;
}