#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float p1, a1, result;
	
	cout << "Informe seu peso";
	cin >> p1;
	
	cout << "Informe sua altura";
	cin >> a1;
	
	result = (p1/ (a1*a1));
	
	if (result <18.5) {
		cout << "voce esta abaixo do peso";
	}
	
	if (result >= 18.5 && result <= 24.9){
		cout << "voce esta no peso normal";
	}
	
	if (result >= 25 && result <=29.9){
		cout <<"voce esta sobrepeso";
	}
	
	if (result >= 30 && result <=34.9){
		cout <<"Obesidade grau I";
	}
	
	if (result >= 35 && result <=39.9){
		cout <<"Obesidade grau II";
	}
	
	if (result >=40){
		cout <<"Obesidade grau III";
	}


	
}
