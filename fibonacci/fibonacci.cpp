#include <iostream>

using namespace std;

int fibonnaci(int n) {

  return n;
}

int main() {

  int n;

  cout << "Write a number to start with: \n";
  cin >> n;

  if (n <= 1) return n;
  else return fibonnaci(n - 1) + fibonnaci(n- 2);

  return 0;
}