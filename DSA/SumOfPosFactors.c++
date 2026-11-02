#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0;
    cin >> x;
    if (x <= 0)
    {
        cout << "Invalid input : ";
        return 0;
    }
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of all positive factors of " << x << " is " << sum;
    return 0;
}