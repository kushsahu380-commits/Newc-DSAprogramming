#include <bits/stdc++.h>
using namespace std;
int main()
{
    // An Emirp number is a prime number whose reverse is also prime, but
    // the reversed number must be different from the original.
    int num, rev = 0;
    bool found = false;
    cin >> num;
    int org = num;
    if (num < 0)
    {
        cout << "Invalid Input";
        return 0;
    }

    if (num <= 1)
    {
        cout << "Not an Emirp Number";
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            found = true;
            break;
        }
    }
    if (found == true)
    {
        cout << "Not an Emirp number : ";
        return 0;
    }
    found = false;
    while (num != 0)
    {
        int n = num % 10;
        rev = rev * 10 + n;
        num /= 10;
    }
    for (int i = 2; i * i <= rev; i++)
    {
        if (rev % i == 0)
        {
            found = true;
            break;
        }
    }
    if (rev != org && found == false)
    {
        cout << "Emirp Number :";
    }
    else
    {
        cout << "Not an Emirp Number :";
    }
    return 0;
}