#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {  int i, sum=1;

  for (i = 1; i <= n; i++) {
    sum = sum * i;
  }
  return sum;
}

int main()
{

    int n,i,sum=1;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


   cout<<factorial(n);
    return 0;
}
