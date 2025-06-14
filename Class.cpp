#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
     int l;
     int b;
     
    //  Rectangle(int l1,int b1)
    //  {
    //     l = l1;
    //     b = b1;
    //  }
    int area()
    {
        return l*b;
    }
    int peri()
    {
        return 2*(l+b);
    }
};

int main()
{
    Rectangle  *p1 = new Rectangle;
    p1->l = 4;
    p1->b = 5; 
     cout<<p1->area()<<endl;
     cout<<p1->peri();

}