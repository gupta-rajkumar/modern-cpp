#include<iostream>

using namespace std;

void badfunc(){
    int *p2 = new int{99};
    /* delete is used to avoid memory leak*/
    delete p2; //delete calls a destructor which frees the memory, but the pointer variable remains;
    *p2 = 99; /*if we reassign the pointer varaible the program will crash*/
    return;
}

int main(){
    int * p = new int{5}; //universal assignment, new gives the address

    cout << "p is " << p << endl;
    cout << "*p is " << *p << endl;

    badfunc();
    cout << "CHeck for the crash" << endl;
}