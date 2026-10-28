#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, rev = 0;
    cin >> x;
    while (x != 0)
    {
        int n = x % 10;
        rev = rev * 10 + n;
        x /= 10;
    }
    cout << rev;
    return 0;
}