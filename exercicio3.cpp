#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	float p1,p2,f,result;
	
	cout << "Informe a primeira nota";
	cin >> p1;
	
	cout << "informe a segunda nota";
	cin >> p2;
	
	cout << "informe suas falta";
	cin >> f;
	
	result = (p1+p2) / 2;
	
	if (result >= 6 && f<=25){
		cout << "Voc� passou com a nota " << result << " parab�ns";
	}else {
		cout << "N�o foi dessa vez";
	}
}
