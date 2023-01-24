#include <iostream>
#include<vector>

using namespace std;

using IntVec = vector<int>; //alternative of typedef vector<int> IntVec;

void print(vector<int> &vec){ //passing vector type int as an arguement
    for(auto v : vec){
        cout << v << ", ";
    }
    cout << endl;
}

class Test {};

int main(){
    vector<IntVec> vec_of_vec; //

    vector<vector<int>> pvec_of_vec;

    IntVec vec{7,8};

    print(vec);

    int x{8}; //c11 new way of initialization

    vector<int> vect{2,4,11,5};

    print(vect);

    vector<int> one(4); //0,0,0,0
    print(one);
    vector<int> two(4,2); //2,2,2,2
    print(two);
    vector<int> uni_one{4}; // 4
    print(uni_one);
    vector<int> uni_two{4,3,4}; //4,3,4
    print(uni_two);

    // int y{7.7};  this throws a compile time error this type of initilialization is illegal
    cout << "x is " << x << endl;

    //Test test();
    Test test{};

}