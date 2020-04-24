#include <iostream>
using namespace std;

// 1) Input: 5-3-1-3-5 => True;
// 2) Input: 7-5-3-5-3-5-7 => False;
// 3) Input: 10-9-8-7-6-5-4-3-2 => False

int main() {
  int n;
  cout << "Size of array n = ";
  cin >> n;
  int* array = new int[n];
  for (int i = 0; i<n; i++){
	  cout << "a[" << i << "] = ";
	  cin >> array[i];
  }
  int min = array[0], posmin = 0;
  for (int i = 0; i<n; i++){
	  if(array[i]<min){
		  min = array[i];
		  posmin = i;
	  }
  }
  bool dec = true;
  if (posmin==0 || posmin==(n-1)){
	  dec = false;
  }
  else{
	  for (int i = 1; i<posmin; i++){
	  	if(array[i-1]>array[i] && array[i]>array[i+1]){
		  	cout << dec;
	  	}
	  	else{
		  	dec = false; 
	  	}
  	}
  	for (int i = posmin+1; i<n-1; i++){
	  	if (array[i-1]<array[i] && array[i]<array[i+1] && dec==true){
			cout << dec;
	  	}
	  	else{
		  	dec = false;
		  	break;
	  	}
  	}
  }
  if(dec){
	  cout << "True";
  }
  else {
	  cout << "False";
  }
  detele []array;
}
