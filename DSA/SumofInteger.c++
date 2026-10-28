#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0;
    cin >> x;
    while (x != 0)
    {
        int n = x % 10;
        sum += n;
        x /= 10;
    }
    cout << sum;
}