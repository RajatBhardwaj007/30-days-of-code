#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main() {
  int size, i, j;
  cin >> size;
  int arr[size];
  for (i = 0; i < size; i++) {
    cin >> arr[i];
  }
  for (j = 0; j < size; j++) {
    cout << arr[size - j - 1] << " ";
  }
  return 0;
}
