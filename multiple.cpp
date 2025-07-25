#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    // A()
    // {
    //     cout<<"A created"<<endl;
    // }
    void fun()
    {
        cout<<"this is A"<<endl;
    }
};
class B{
    public:
    // B()
    // {
    //     cout<<"B created"<<endl;
    // }
    void fun()
    {
        cout<<"this is B"<<endl;
    }
};
class C : public B , public A{
    public:
    // C()
    // {
    //     cout<<"C created"<<endl;
    // }
    void fun1()
    {
        cout<<"this is C"<<endl;
    }
};

int main()
{
    C c;
    c.A::fun();
    c.B::fun();

}