#include<iostream>

using namespace std;

int func(const int& y){ //referencing as a pointer to x aka dereferencing
    cout << "Address of y is " << &y << endl;
    //y = 1; this will throw a compile time error
    return y;
}

int main(){
    int x = 2;
    cout << "Address of x is " << &x << endl;
    int z = func(x);
    cout << "Address of z is " << &z << endl;
    cout << "After calling func(), x is " << x << endl;
    cout << "After calling func(), z is " << z << endl; 
}