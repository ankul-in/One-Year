// https://youtu.be/Z4AfBIzmA1U

//inline functions

#include <iostream>

#include <cmath>

using namespace std;
inline int squareInt(int x) {return x*x ;}

int main(){
    int r=10;
    double peri = squareInt(r);
    
    cout << "square is "<<peri;
    
    return 0;
    
}