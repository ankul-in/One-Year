//return by reference

#include <iostream>
using namespace std;

int& Function_return_by_reference(int &x){
    cout<<"x= "<<x<< " &x= "<<&x<<endl;
    return (x);
    
}
int main(){
    int a=10;
    cout<<"a= "<<a<< " &a= "<<&a<<endl;
    const int& b=Function_return_by_reference(a);
    cout<<"b= "<<b<< " &b= "<<&b<<endl;
    
}