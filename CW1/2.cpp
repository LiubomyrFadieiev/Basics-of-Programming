#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float *a = new float;
	cout << "Input number" << endl;
	cin >> *a;
	if (*a<0){*a = *a * -1;}
	cout << "|a| = " << *a;
}
