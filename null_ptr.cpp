#include<iostream>

using namespace std;

void func(int i){
    cout << "func with i" << endl;
}

void func(int *i){
    cout << "func with pointer to i" << endl;
}

int main(){
    func(NULL);
    func(nullptr);
}