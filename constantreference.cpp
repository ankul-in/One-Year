// https://youtu.be/ksl5GEU7HJc
// constant reference

#include <iostream>

using namespace std;

int ref_const(const int &x)
{

    return (x + 1);
}

int main()
{
    int a = 10, b;
    b = ref_const(a);
    cout << "a=" << a << " and b=" << b << endl;
}