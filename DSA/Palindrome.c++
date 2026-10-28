#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, rev = 0;
    cin >> x;
    int pa = x;
    while (x != 0)
    {
        int n = x % 10;
        rev = rev * 10 + n;
        x /= 10;
    }
    if (pa == rev)
    {
        cout << "The given number is palindrome : ";
    }
    else
    {
        cout << "The given number is not a palindrome : ";
    }
    return 0;
}