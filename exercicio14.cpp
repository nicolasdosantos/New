#include <iostream>

using namespace std;

main (){
	setlocale(LC_ALL,"Portuguese");
	float q1,A;
	
	cout << "Informe a valor do lado do seu quadrado";
	cin >> q1;
	
	A= q1*q1;
	cout << "Sua ârea é de: " <<A;
}
