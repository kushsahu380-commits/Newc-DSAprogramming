#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int last = x % 10;
    int remaining = x / 10;
    int rotated = last * 100 + remaining;
    cout << rotated << " ";
    return 0;
}