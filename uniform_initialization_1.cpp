#include<iostream>
using namespace std;

int main()
{
    // int a[] {1,2,3,4};
    auto a {1}; // can initialize an auto with one element which specifies the type.
                // cannot initialize it to an array
    cout<<"array element"<<a;
}
