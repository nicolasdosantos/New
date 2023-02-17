#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, result;

	const int anoAtual = 2023;
	
	cout << "Informe seu ano de nascimento";
	cin >> idade;
	
	result = anoAtual-idade;
	
	if (idade >= 16){
		cout << "Você tem " <<result << " ,você pode votar";
	}else {
		cout << "Você ainda não tem a idade nescessaria";
	}
}
