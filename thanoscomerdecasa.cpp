#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	float n,t;
	
	cout << "Bem-Vindo a caça ao Thanos";
	system("cls");
	
	cout << "Selecione o nível de dificuldade:"<< endl;
	cout << "1 = fácil" << endl;
	cout << "2 = médio" << endl;
	cout << "3 = difícil" << endl;
		cin >> n;
		
	if (n == 1){
		t = 15;
		cout<< "Sua dificuldade selecionada foi fácil, você tem " <<t<< " tentativas" << endl;	
	}
	else if (n == 2){
		t = 10;
				cout<< "Sua dificuldade selecionada foi média, você tem " <<t<< " tentativas" << endl;
	}
	 
	else if (n == 3){
		t = 4;
			cout<< "Sua dificuldade selecionada foi Díficil, você tem " <<t<< " tentativas" << endl ;	
	}
	
	else{
		cout <<"A dificuldade é entre 1 e 3 idiota, game over"<< endl;
	}
	
	system ("pause");
	system("cls");
	
	for ( int i=0; i<=t; i++);

	
	
}



