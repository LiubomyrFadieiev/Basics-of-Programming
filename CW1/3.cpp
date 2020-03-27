#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a,b,n;
	 cout << "Input number." << endl;
	 cin >> n;
	int n1 = n, count = 1;
	while (n1/10 != 0){count++; n1 = n1/10;}
	int *arr = new int[count];
	int num, num1, p;
	for (int i = 1; i<=count; i++){
		p = pow(10,count-i);
		num = int(n/p);
		num1 = num%10;
		arr[i-1] = num1; 
	}
	int min,max, kmin, kmax;
	min = arr[0];
	max = arr[0];
	kmin = 0; kmax = 0;
	for (int i = 1; i<count; i++){
		if (arr[i]<min) {min = arr[i]; kmin = i;}
		if (arr[i]>max) {max = arr[i]; kmax = i;}
	}
	int c;
	if (kmax<kmin){c = kmax; kmax = kmin; kmin = c;}
	while (kmin!=kmax+1){
		cout << arr[kmin];
		kmin++;
	}
}
