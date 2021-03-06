#include <iostream>
#include <cstring>
using namespace std;

// 1) Input: (1-2-3)(2-3-1)(3-1-2) => True
// 2) Input: (1-3-2)(2-3-1)(3-1-2) => False
// 3) Input: (1-2-3-4)(2-3-4-1)(3-4-1-2)(4-1-2-3) => True

int main() {
	int n; 
	cout << "We will create matrix nxn. n = ";
	cin >> n;
	int** matrix = new int*[n];
	for (int i = 0; i<n; i++){
		matrix[i] = new int[n];
	}
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
	int newi, newj;
	bool dec = true;
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			for (int k = 1; k<n; k++){
				newi = (i+k)%n;
				newj = (j+k)%n;
				if (matrix[i][j]==matrix[i][newj] || matrix[i][j]==matrix[newi][j]){
					dec = false;
					break;
				}
			}
		}
	}
	if(dec){
		cout << "True";
	}
	else{
		cout << "False";
	}
  for (int i = 0; i<n; i++){
		delete matrix[i];
	}
	delete []matrix;
}
