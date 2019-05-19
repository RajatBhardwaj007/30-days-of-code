#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {

  int n, i, sum;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (i = 1; i <= 10; i++) {
    sum = n * i;
    cout << n << " x " << i << " = " << sum << endl;
  }

  return 0;
}
