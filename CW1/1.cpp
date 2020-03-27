#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n, n1 = 10, n2 = 0, po;
  const unsigned int digit = 6;
  bool dec = true;
  cout << "Input number." << endl;
  cin >> n;
  for (int i = 1; i<=digit; i++){
	po = digit-i; 
	  n2 = int(n/pow(10,(digit-i))); n2 = n2%10;
	  if (n1>=n2){n1 = n2;}
	  else {dec = false; break;}
  }
  if (dec){cout << "True";}
  else {cout << "False";}

}
