#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long fact = 1;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    if (n < 0)
    {
        cout << "Invalid input :";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact;
    return 0;
}