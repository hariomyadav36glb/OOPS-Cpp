#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int standard;
    char grade;
    
    public:
    Student(string name1,int cl,char ch)
    {
        name = name1;
        standard = cl;
        grade = ch;
    }
    public:
    void fun()
    {
        cout<<name<<" "<<standard<<" "<<grade;
    }
};
int main()
{
    Student s1("Hariom",10,'A');
    s1.fun();

}