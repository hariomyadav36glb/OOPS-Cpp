#include<bits/stdc++.h>
using namespace std;

int main(){
    // open the file
    // ofstream fout;
    // fout.open("zoom.txt");
    // // write kr sakta hu
    // fout<<"hello world";
    // fout.close(); /*release resources aquired*/

    ifstream fin;
    
    fin.open("zoom.txt");

    char c ;
    c = fin.get();
    while(!fin.eof())
    {
        cout<<c;
        c = fin.get();
    }
      fin.close();

} 