#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0, org1, org2, count = 0;
    cin >> x;
    org1 = x;
    org2 = x;
    if (x < 0)
    {
        cout << "Invalid Input :";
        return 0;
    }
    while (x != 0)
    {
        count++;
        x /= 10;
    }
    while (count != 0)
    {
        int n = org1 % 10;
        int pow = 1;
        for (int i = 0; i < count; i++)
        {
            pow *= n;
        }
        sum += pow;
        org1 /= 10;
        count--;
    }
    if (org2 == sum)
    {
        cout << "Disarium number : ";
    }
    else
    {
        cout << "Not a Disarium number :";
    }
    return 0;
}