#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Auto{
	string mark;
	string model;
	string year;
	string engine;
};

void sort(Auto* a, int size){
	ofstream in;
	struct Auto temp;
	in.open("out.txt");
	for (int i = 0; i<size; i++){
		for (int j = 0; j<size; j++){
			if((a[i].mark > a[j].mark) || ((a[i].mark == a[j].mark) &&(a[i].model > a[j].model))){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i<size; i++){
		in << a[i].mark << ' ' << a[i].model << ' ' << a[i].year << ' ' << a[i].engine << "\n";
	}
}
