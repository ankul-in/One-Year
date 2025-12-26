// https://youtu.be/WWRbIPpChKk

// stack in cpp
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main()
{
    char str[10] = "ABCDE";
    stack<char> s;

    for (int i = 0; i < strlen(str); i++)
    {
        s.push(str[i]);
    }
    cout << "reversed string: ";
    while (!s.empty())
    {

        cout << s.top();
        s.pop();
    }
}