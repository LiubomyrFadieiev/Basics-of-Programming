#include <iostream>
#include <cmath>
using namespace std;

struct Complex{
	int a;
	int b;

	float module(){
		int pow = a*a + b*b;
		return sqrt(pow);
	}

	Complex(int a, int b){
		this->a = a;
		this->b = b;
	}
};

int main() {
  	int a,b;
	cout << "Please input real number in complex number \na = ";
	cin >> a;
	cout << "Please input real number in complex number \nb = ";
	cin >> b;
  	Complex comp(a,b);
	cout << '|' << comp.a << '+' << comp.b << "i| = " << comp.module();
}
