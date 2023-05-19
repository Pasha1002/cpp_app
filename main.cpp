#include <iostream>
#include <windows.h>
using std::endl;
using std::cout;
using std::cin;
using std::string;


int main() {

	float pi = 3.14;
	int L;
	cout << "Enter the length of the circle: ";
	cin >> L;
	cout << "R = " << L / 2 * pi << endl;
	float R = L / 2 * pi;
	cout << "S = " << pi * (R * R);

	

	
	return 0;
}