#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, pro = 1;
    cin >> x;
    if (x == 0)
    {
        cout << 0;
        return 0;
    }
    while (x != 0)
    {
        int n = x % 10;
        pro *= n;
        x /= 10;
    }
    cout << pro;
    return 0;
}