#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float n,t;
	
	cout << "Bem-Vindo a ca�a ao Thanos";
	system("cls");
	
	cout << "Selecione o n�vel de dificuldade:"<< endl;
	cout << "1 = f�cil" << endl;
	cout << "2 = m�dio" << endl;
	cout << "3 = dif�cil" << endl;
		cin >> n;
		
	if (n == 1){
		t = 15;
		cout<< "Sua dificuldade selecionada foi f�cil, voc� tem " <<t<< " tentativas" << endl;	
	}
	else if (n == 2){
		t = 10;
				cout<< "Sua dificuldade selecionada foi m�dia, voc� tem " <<t<< " tentativas" << endl;
	}
	 
	else if (n == 3){
		t = 4;
			cout<< "Sua dificuldade selecionada foi D�ficil, voc� tem " <<t<< " tentativas" << endl ;	
	}
	
	else{
		cout <<"A dificuldade � entre 1 e 3 idiota, game over"<< endl;
	}
	
	system ("pause");
	system("cls");
	
	for ( int i=0; i<=t; i++);

	
	
}



