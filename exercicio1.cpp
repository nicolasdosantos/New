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
		cout << "Voc� tem " <<result << " ,voc� pode votar";
	}else {
		cout << "Voc� ainda n�o tem a idade nescessaria";
	}
}
