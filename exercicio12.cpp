#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	float c1, f;
	
	cout << "Informe o Celsius ";
	cin >> c1;
	
	f = c1 * 1.8 + 32;
		cout << " O Fahrenheit  é " <<f;

}

