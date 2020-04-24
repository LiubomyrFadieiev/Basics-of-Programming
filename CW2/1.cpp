#include <iostream>
using namespace std;

// 1) Input: 5-3-1-3-5 => True;
// 2) Input: 7-5-3-5-3-5-7 => False;
// 3) Input: 10-9-8-7-6-5-4-3-2 => False
bool arraycheck(int* array, int len){
	int min = array[0], posmin = 0;
 	 for (int i = 0; i<len; i++){
	  if(array[i]<min){
		  min = array[i];
		  posmin = i;
	  }
  }
  	bool dec = true;
  	if (posmin==0 || posmin==(len-1)){
	  dec = false;
  }
  	else{
	  for (int i = 1; i<posmin; i++){
	  	if(array[i-1]>array[i] && array[i]>array[i+1]){
		  	continue;
	  	}
	  	else{
		  	dec = false; 
	  	}
  	}
  	for (int i = posmin+1; i<len-1; i++){
	  	if (array[i-1]<array[i] && array[i]<array[i+1] && dec==true){
			continue;
	  	}
	  	else{
		  	dec = false;
		  	break;
	  	}
  	}
  }
  return dec;
}
int main() {
  int n;
  cout << "Size of array n = ";
  cin >> n;
  int* array = new int[n];
  for (int i = 0; i<n; i++){
	  cout << "a[" << i << "] = ";
	  cin >> array[i];
  }
  bool dec = arraycheck(array,n);
  if(dec){
	  cout << "True";
  }
  else {
	  cout << "False";
  }
  delete []array;
}
