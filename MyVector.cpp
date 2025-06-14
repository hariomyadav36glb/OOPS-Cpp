#include<bits/stdc++.h>
using namespace std;
class Vector{
   public:
   int size;
   int capacity;
   int* arr;
   Vector()
   {
      size=0;
      capacity = 1;
      arr = new int[1];
   }
   
   void add(int ele)
   {
     if(size==capacity)
     {
        capacity*=2;
        int* arr2 = new int[capacity];
        for(int i=0;i<size;i++)
        {
            arr2[i] = arr[i];
        }
        arr = arr2;

     }
     arr[size] = ele;
     size++;
   }
  
    void pop()
    {
        size--;
    }
    int get(int idx)
    {
        
        cout<<arr[idx]<<" "<<endl;
    }
   void print()
   {
     for(int i=0;i<size;i++)
     {
        cout<<arr[i]<<" ";
     }
   }

};

int main()
{
     Vector v;
     v.add(10);
     v.add(20);
     v.add(10);
     v.add(30);
     v.add(10);
     v.add(50);
     v.pop();
     v.get(20);
     v.pop();
     v.pop();
     v.pop();

     v.print();

}