// https://youtu.be/ksl5GEU7HJc?
// return by reference

#include <iostream>
using namespace std;

int &return_ref(int &x)
{
    return (x);
    // do not reference to local variable
}
int main()
{
    int a = 10, b = return_ref(a);
    cout << "a= " << a << " &b= " << &b << endl;
    return_ref(a) = 3;
    cout << "a= " << a;
}