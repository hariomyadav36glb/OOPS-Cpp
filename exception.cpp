#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x , y;
    cin>>x>>y;

    try{

        if(y==0) throw string("Not possible");
        int res = x /y;
        cout<<res;
    }
    catch(string s){
           cout<<s;
    }
}