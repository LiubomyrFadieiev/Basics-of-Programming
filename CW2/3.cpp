
#include <iostream>
#include <cstring>
using namespace std;

// 1) Input: qweerttyyey => qwr
// 2) Input: asddfghjkk => asfghj
// 3) Input: asdfghasdfgh => " ";

int main() {
	int Max_N = 100;
	char* array = new char[Max_N];
	cout << "Input a string array" << endl;
	cin.get(array,Max_N);
	int len = strlen(array);
	char unicArray[Max_N], moreArray[Max_N];
	bool dec; int ku = 0, km = 0;
	for (int i = 0; i<len; i++){
		int j = i+1;
		while (array[i]!=array[j] && j<len){
			j++;
		}
		if (array[i]==array[j]){
			moreArray[km] = array[j];
			km++;
		}
		dec = true;
		for (int j = 0; j<strlen(moreArray); j++){
			if (moreArray[j]==array[i]){
				dec = false;
				break;
			}
			else{continue;}
		}
		if (dec){
			unicArray[ku] = array[i];
			ku++;
		}
	}
	cout << unicArray;
	delete []array;
}
