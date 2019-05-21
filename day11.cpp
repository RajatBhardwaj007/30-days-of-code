#include <bits/stdc++.h>

using namespace std;

int sum(int arr[3][3])
{
    int i,j,s=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s=s+arr[i][j];
        }
    }
    s=s-arr[1][0]-arr[1][2];


    return s;
}



int main()
{   int arr[6][6];

    for (int i = 0; i < 6; i++) {

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }


    int a,b,i,j,s=0,max=-999;
    int newarr[3][3];

    for(a=0;a<=3;a++)
    {   for(b=0;b<=3;b++)
    {

        for(i=0;i<3;i++)
        {
          for(j=0;j<3;j++)
          {
              newarr[i][j]=arr[i+a][j+b];
          }

        }

       s = sum(newarr);

        if (s > max)
       { max = s;

       }
     else
      s = 0;

    }



    }




    cout<<max<<endl;







    return 0;
}
