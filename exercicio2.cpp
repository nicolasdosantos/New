#include <iostream>

using namespace std;
	
main(){
	setlocale(LC_ALL, "Portuguese");
	float n1,n2;
	 
	cout << "Informe o nuemro";
	cin >> n1;
	
	cout << "Informe o segundo numero";
	cin >> n2;
	
	if(n1 > n2) {
		cout << "O primeiro numero � maior";
	}else if ( n1 = n2){
		cout << "Os numeros s�o iguais";
	}else {
		cout << "O segundo numero � maior";
	}
}
