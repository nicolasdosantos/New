#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float n1,n2,n3;
		
	cout << "Informe o numero";
	cin >> n1;
	
	cout << "Informe o segundo numero";
	cin >> n2;
	
	cout << "Informe o terceiro numero";
	cin >> n3;
	
	if(n1 > n2 && n1>n3) {
		cout << "O primeiro numero é o maior";
	
	}else if ( n2 > n1 && n2 > n3){
		cout << "O segundo numero é o maior";
	
	}else if ( n3 > n1 && n3 > n2 ){
		cout << "O terceiro numero é o maior";
	}
}

