// https://youtu.be/rDTY6525iGM

// array sum

#include <iostream>
#include <vector>
using namespace std;
#define MAX 100

int main()
{
    vector<int> arr(MAX);
    cout << "enter number of elements ";
    int count, sum = 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        arr[i] = i;
        sum += arr[i];
    }
    cout << "sum of array is " << sum;
    return 0;
}