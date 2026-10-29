#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, count = 0;
    cin >> x;
    if (x == 0 || x < 0)
    {
        cout << "Not defined : ";
        return 0;
    }
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}