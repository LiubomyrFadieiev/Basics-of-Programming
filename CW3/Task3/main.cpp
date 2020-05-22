#include <iostream>
#include <cmath>
#include "struct.h"
using namespace std;

int main() {
  	int a,b;
	cout << "Please input real number in complex number \na = ";
	cin >> a;
	cout << "Please input real number in complex number \nb = ";
	cin >> b;
  	Complex comp(a,b);
	cout << '|' << comp.a << '+' << comp.b << "i| = " << comp.module();
}
