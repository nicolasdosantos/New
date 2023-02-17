#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float n1;
	
	cout <<"Informe o número";
	cin >> n1;
	
	if(n1 >0){
		cout << "Seu número é positivo";
	}
	
	if(n1 <0){
		cout << "Seu número é negativo";
	}
	
	if(n1 == 0){
		cout << "Seu número é neutro";
	}
}
