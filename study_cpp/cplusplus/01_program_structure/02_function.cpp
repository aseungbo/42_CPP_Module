#include <iostream>
using namespace std;

// function example
int addition(int a, int b)
{
    int rtn;
    rtn = a + b;
    return (rtn);
}

int main()
{
    int a = 1;
    int b = 2;
    
    int c = addition(a, b);
    cout << "c is: " << c << endl;
}