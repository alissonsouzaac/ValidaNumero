#include <iostream>
#include "TestaValidaNumero.h"
using namespace std;

void TestaValidaNumero::validaNumero(int num){
	
//	cout <<"Digite o valor do numero:"<< endl;
//	cin >> num;
 
	if(num <= 0){
		cout << "ValorAbaixoException"<< endl;
	}
	
    if(num > 1 && num <= 100){
    	
		cout << "ValorAcimaException"<< endl;
	}
	
	if(num > 100) {
		cout << "ValorMuitoAcimaException" << endl;
	}
	
}
