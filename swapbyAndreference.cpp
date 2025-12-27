//https://youtu.be/U9K1sl91fdE

//swap by reference

#include <iostream>
using namespace std;

int main(){
    int a = 10,b=15;
    cout<<"a="<<a<<" b="<<b<<" to swap "<<endl;
    swap(a,b);
    cout<<"a="<<a<<" b="<<b<<" after swap "<<endl;
}

void swap(int &x , int &y){
    int t;
    t=x;
    x=y;
    y=t;
}