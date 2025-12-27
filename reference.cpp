//https://youtu.be/U9K1sl91fdE

//reference

#include <iostream>

using namespace std;

int main(){
    int i = 2;
    int &j = i;
    const int &k = 5;
    const int &l = i+j;
    
    cout << i <<","<<&i<<endl;
    cout << j <<","<<&j<<endl;
    cout << k <<","<<&k<<endl;
    cout << l <<","<<&l<<endl;
    
    
}