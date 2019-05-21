#include <bits/stdc++.h>

using namespace std;

int binary(int x)
{
    int a,sum=0;
      if(x==0)
   return 0;
   else if(x==1)
   return 1;
   else
    {
    a=x%2;
   sum=a+(binary(x/2))*10;
   return sum;
    }

}

void cons(int x)
{
    int m=0,siz=0,i,a,cp,sum=0;
    cp=x;
    while(x>0)
      {
          x=x/10;
          siz++;
      }

      for(i=0;i<siz;i++)
    {
        a=cp%10;
        if(a==1)
       { sum++;
         if(m<sum)
            m=sum;

       }
        else
        {
            if(m<sum)
                m=sum;

            sum=0;
        }
        cp=cp/10;

    }
  cout<<m;



}
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int bin,siz=0,cp;
    bin=binary(n);

   cons(bin);





    return 0;
}
