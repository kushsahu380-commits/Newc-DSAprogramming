#include <bits/stdc++.h>
using namespace std;
int main()
{ // A Smith Number is a composite number whose sum of digits equals
    // the sum of the digits of all its prime factors, including repeated factors.
    int num, sum = 0, factorSum = 0, org;
    bool found = false;
    cin >> num;
    org = num;
    if (num < 0)
    {
        cout << "Invalid Input :";
        return 0;
    }
    if (num <= 1)
    {
        cout << "Not a Smith Number :";
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
    if (found == false)
    {
        cout << "Not a Smith Number : ";
        return 0;
    }
    while (org != 0)
    {
        int n = org % 10;
        sum += n;
        org /= 10;
    }
    // Calculate sum of digits of prime factors
    for (int i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            int factor = i;
            while (factor != 0)
            {
                factorSum += factor % 10;
                factor /= 10;
            }
            num /= i;
        }
    }
    // Compare both sums
    if (sum == factorSum)
    {
        cout << "Smith Number";
    }
    else
    {
        cout << "Not a Smith Number";
    }
    return 0;
}