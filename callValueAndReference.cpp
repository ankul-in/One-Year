// https://youtu.be/U9K1sl91fdE

//call by value and reference

#include <iostream>

using namespace std;

void function_under_param_test(int&,int);

int main(){
    int a=20;
    cout << "a=" << a << ", &a=" << &a << endl;
    function_under_param_test(a,a);
}

void function_under_param_test(int &b,int c){
    cout << "b=" << b << ", &b=" << &b <<endl;
    cout << "c=" << c << ", &c=" << &c <<endl;
}