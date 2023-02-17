#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float sa,sb;
	
	cout <<"Informe seu salario";
	cin >> sb;
	
	if (sb <= 1000 ){
		sa = sb * 1.15;
		cout << "Seu salrio era: "<< sb <<" e aumentou para: " << sa;
	}
	
	if (sb >= 1000.01 && sb <=2000 ){
		sa = sb * 1.10;
		cout << "Seu salrio era: "<< sb <<" e aumentou para: " << sa;
	}
	
	if (sb >=2000 ){
	sa = sb * 1.05;
	cout << "Seu salrio era: "<< sb <<" e aumentou para: " << sa;
	
	}
		
}
