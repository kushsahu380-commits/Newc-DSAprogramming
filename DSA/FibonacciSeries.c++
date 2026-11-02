#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 0 1 1 2 3 5 8
    int x = 0, y = 1, z, n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid Input :";
    }
    cout << x << " ";
    for (int i = 0; i < n - 1; i++)
    {
        z = x + y;
        cout << y << " ";
        x = y;
        y = z;
    }
    // x=0,y=1;
    // i=0; 0 1 ,z=1,x=1,y=1;
    // i=1; 0 1 1 ,z=2,x=1,y=2;
    // i=2; 0 1 1 2 ,z=3,x=2,y=3;
    // i=3; 0 1 1 2 3,z=5,x=3,y=5;
    return 0;
}