#include <iostream>
using namespace std;

int main() {
  int celcius;
  cout << "input Farenheit °: "; 
  cin >> celcius;
  int x=celcius-32;
  int y=5*x;
  int z=y/9;
  cout << "you get: " << z<<"°Celcius";
  return 0;
}
