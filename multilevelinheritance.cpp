#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
         cout<<"A created"<<endl;
    }
    void fun()
    {
        cout<<"This is A"<<endl;
    }
};
class B : public A{
    public:
    B(){
      cout<<"B created"<<endl;
    }
    // void fun(){
    //     cout<<"This is B"<<endl;
    // }
};
class C : public B{
    public:
    C(){
      cout<<"C created"<<endl;
    }
    // void fun(){
    //     cout<<"This is C"<<endl;
    // }
};

int main()
{
    C c;
    c.fun();
}