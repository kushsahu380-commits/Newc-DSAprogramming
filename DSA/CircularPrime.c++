#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, org, count = 0;
    cin >> x; // 113
    bool found = false;
    if (x < 0)
    {
        cout << "Invalid Input :";
        return 0;
    }
    if (x <= 1)
    {
        cout << "Not a prime number :";
        return 0;
    }
    org = x;
    while (x != 0)
    {
        count++;
        x /= 10;
    }
    int rotations = count;
    while (rotations != 0)
    {
        int last = org % 10;
        int remain = org / 10;
        int power = 1;
        for (int i = 0; i < count - 1; i++)
        {
            power *= 10;
        }
        int rotate = last * power + remain;
        if (rotate <= 1)
        {
            cout << "Not a prime number :";
            return 0;
        }
        found = false;
        for (int i = 2; i * i <= rotate; i++)
        {
            if (rotate % i == 0)
            {
                found = true;
                break;
            }
        }
        if (found == true)
        {
            cout << "Not a Circular prime : ";
            return 0;
        }
        org = rotate;
        rotations--;
    }
    if (found == false)
    {
        cout << "Circular prime :";
    }
    return 0;
}