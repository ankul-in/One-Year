// https://youtu.be/rDTY6525iGM

// dynamically managed array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "enter number of elements ";
    int count, sum = 0;
    cin >> count;

    vector<int> arr;
    arr.resize(count);
    for (int i = 0; i < count; i++)
    {

        arr[i] = i;
        sum += arr[i];
    }
    cout << "sum of dynamic array " << sum;

    return 0;
}