#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0;
    cin >> x;
    if (x < 0)
    {
        cout << "Invalid input : ";
        return 0;
    }
    long long sq = 1LL * x * x;
    while (sq != 0)
    {
        int n = sq % 10;
        sum += n;
        sq /= 10;
    }
    if (x == sum)
    {
        cout << "Neon Number : ";
    }
    else
    {
        cout << "Not a Neon Number : ";
    }
    return 0;
}