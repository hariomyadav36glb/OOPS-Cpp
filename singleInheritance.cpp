#include<bits/stdc++.h>
using namespace std;

class Human{
  public:
   Human()
   {
     cout<<"Human created"<<endl;
   }
     ~Human()
   {
     cout<<"Human destroyed"<<endl;
   }

};
class Student : public Human{
    public:
    Student()
    {
        cout<<"Student created"<<endl;
    }
        ~Student()
    {
        cout<<"Student destroyed"<<endl;
    }
};

int main()
{
    Human s;
    // Human* s1 = new Human();
    cout<<"Main function is running"<<endl;
    // delete s1;
}