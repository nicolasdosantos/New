#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	string n1,n2;
	int i1,i2;
	
	cout <<"Primeira pessoa informe seu nome";
	cin >> n1;
	
	cout <<"primeira pessoa informe sua idade"<< endl;
	cin >> i1;
	
	cout <<" Segunda pessoa informe seu nome"<< endl;
	cin >> n2;
	
	cout <<"Segunda pessoa informe sua idade"<< endl;
	cin >> i2;
	
	if( i1 > i2){
		cout << n1<< " pessoa é mais velha";
	}
	
	if ( i1 < i2){
		cout << n2 << " pessoa é a mais velha";
	}
	
	if ( i1 == i2){
		cout << "Suas idades são a mesma";
	}
}
