// https://youtu.be/x_IAtg8ChH8

// replace function
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int data[] = {
        1, 2, 3, 4, 5};
    replace(data, data + 5, 3, 2);
    for (int i = 0; i < 5; ++i)
    {

        cout << data[i] << " ";
    }
    return 0;
}