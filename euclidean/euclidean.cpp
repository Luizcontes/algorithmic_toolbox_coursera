#include <iostream>

using namespace std;

int euclidean(int a, int b) {

  if (b == 0) return a;

  return euclidean(b, a%b); 
}

int main() {

  int a;
  int b;

  cout << "Insert the first number to calculate: ";
  cin >> a;

  cout << "\n";

  cout << "Insert the second number to calculate: ";
  cin >> b;

  cout << euclidean(a, b);

  return 0;
}