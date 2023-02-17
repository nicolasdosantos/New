#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float r, A;
	
	cout << "Informe seu raio";
	cin >> r;
	
	A = r*r*3.14;
		cout << "Esse é sua area atual: " << A; 
}
