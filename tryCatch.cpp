#include<bits/stdc++.h>
using namespace std;

int division(int x,int y)
{
    if(y==0) throw 1;
    return x/y;

}

int main()
{
    int x = 10 , y = 1;
    try{

        int res = division(x,y) ;
        cout<<res;
    }
    catch(int e)
    {
        cout<<"error ";
    }
}