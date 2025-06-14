// default constructor
#include<bits/stdc++.h>
using namespace std;
// class Test
// {
//     public:
//     int a;
//     int b;

//     Test(int a1,int b1)
//     {
//         a = a1;
//         b = b1;
//     }
// };

// int main()
// {
//     Test  t1(2,3);
//     cout<<t1.a<<" "<<t1.b;
// }

class Test
{
    public:
    int a;
    int* ptr;

    Test(int a1)
    {
        a = a1;
        ptr = new int[a];
    }
    Test(Test &r)
    {
        a = r.a;
        ptr = new int [a];
    }
};

int main()
{
    Test t1(3);
      for (int i = 0; i < 3; ++i) {
        *(t1.ptr + i) = (i + 1) * 10; // assign 10, 20, 30, 40, 50
    }
    cout<<t1.a<<endl;
      for (int i = 0; i < 3; ++i) {
        cout<<*(t1.ptr+i)<<" ";
    }
    cout<<endl;

    Test t2(t1);

    cout<<t2.a<<endl;
      for (int i = 0; i < 3; ++i) {
        cout<<*(t2.ptr+i)<<" ";
    }


   
    // cout<<t2.a<<t2.b;
}