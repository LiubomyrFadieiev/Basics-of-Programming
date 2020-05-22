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
