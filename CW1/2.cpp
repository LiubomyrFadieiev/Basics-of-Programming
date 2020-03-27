#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float *a = new float;
	cout << "Input number" << endl;
	cin >> *a;
	if (*a<0){*a = *a * float(-1);}
	cout << "|a| = " << *a;
}
