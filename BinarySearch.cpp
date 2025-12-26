// https://youtu.be/x_IAtg8ChH8

// binary Search
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int data[] = {
        1, 2, 3, 4, 5},
        k = 3;
    if (binary_search(data, data + 5, k))
    {

        cout << "found!\n";
    }
    else
        cout << "not Found \n";
}