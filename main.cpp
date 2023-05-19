#include <iostream>
#include <windows.h>
using std::endl;
using std::cout;
using std::cin;
using std::string;


int main() {

	
	int t, V, a;
	cout << "Enter V: ";
	cin >> V;
	cout << "Enter t: "; 
	cin >> t;
	cout << "Enter a: ";
	cin >> a;
	cout << "S = " << V * t + ((a * (t * t)) / 2);

	return 0;
}