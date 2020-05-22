#include <iostream>
#include <string>
#include <fstream>
#include "struct.h"
using namespace std;


int main() {
	int n = 5;
	struct Auto* a = new struct Auto[n];
	string line;
	ifstream out;
	out.open("in.txt");
	int i = 0;
	if(out.is_open()){
		while(out){
			getline(out,line,',');
			a[i].mark = line;
			getline(out,line,',');
			a[i].model = line;
			getline(out,line,',');
			a[i].year = line;
			getline(out,line,',');
			a[i].engine = line;
			i++;
		}
	}
	sorted(a,n);
}
