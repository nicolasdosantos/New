#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float sm,ht,result;
	
	cout << " Informe o salário minimo";
	cin >> sm;
	
	cout << "Informe suas horas de trabalho";
	cin >> ht;
	
	result = (ht*12)+sm;
	cout << "Esse é seu salario bruto" <<result;
}
