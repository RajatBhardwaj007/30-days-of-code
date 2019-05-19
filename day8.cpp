#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int size,i,j;
    cin>>size;
    map< string, int>phonebook;
    for(i=0;i<size;i++)
  {    int a;
       string name;
       cin>>name>>a;
       phonebook[name]=a;
  }

   for(j=0;j<size;j++)
   {
       string name;
       cin>>name;

       if(phonebook[name])
       {
           cout<<name<<"="<<phonebook[name]<<endl;
       } else {
         cout << "Not found" << endl;
       }
   }


    return 0;
}

