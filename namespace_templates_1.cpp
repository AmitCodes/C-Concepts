#include<iostream>
using namespace std;
#define AA A::A
#define BA B::A

namespace A
{
    class A
    {
        public:
            A()
            {
                cout<< "A::A"<<endl;
            }
            static func()
            {
                cout<<"A::A::func"<<endl;
            }
    };
}

namespace B
{
    class A
    {
        public:
            A()
            {
                cout<< "B::A"<<endl;
            }
            static func()
            {
                cout<<"B::A::func"<<endl;
            }
    };
}

template <class T>
class temp
{
public:
    void publicFunc()
    {
        T::func();
    };
};

int main()
{
    temp<AA> aa1;
    aa1.publicFunc();
    temp<BA> ba1;
    ba1.publicFunc();
}
