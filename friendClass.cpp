#include<bits/stdc++.h>
using namespace std;

class Your ; 
 
class My{
    private : int a;
    protected : int b;
    public : int c;
    
    friend Your;

};

class Your{
    public:
    My m;
    void fun()
    {
        m.a = 10;
        m.b = 20;
        m.c = 30;
    }
    void show()
    {
        cout<<m.a<<m.b<<m.c;
    }
};

int main()
{
    Your  y;
    y.fun();
    y.show();
}