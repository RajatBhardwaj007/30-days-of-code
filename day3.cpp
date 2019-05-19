#include <bits/stdc++.h>
#include<iostream>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N%2!=0)
    {
      cout << "Weird"<<endl;
    }
   else {
          if(N<=5 && N>=2)
      { cout<< "Not Weird"<<endl;
               }
          else if(N>=6 && N<=20)
      {     cout << "Weird" <<endl; }
           else
      {       cout << "Not Weird"<<endl;}
   }

    return 0;
}
