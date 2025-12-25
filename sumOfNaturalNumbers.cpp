// https://youtu.be/R9byHM7vzn8

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "enter number upto which you want sum of natural numbers ";
    cin >> n;
    for (int i = 0; i <= n; ++i)
    {
        sum = sum + i;
    }

    cout << "Sum of " << n << " natural numbers is " << sum;
    return 0;
}