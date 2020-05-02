#include <iostream>
#include <stdlib.h>
#include <fstream> /* f de file */
using namespace std;

void salario();
int main(){
	int horas, salario, horasextras; /*salario 2900/40 */
	float salarioxhora = 72.50, ciggs = 4.83, iggs;
	cout<<"Ingrese un numero de horas trabajadas: "; cin>>horas;
	cout<<"Ingrese un numero de horas extras: "; cin>> horasextras;
	if(horas<=40){
		salario = horas*salarioxhora;
		iggs = (ciggs*salario)/100;
		cout<<"\n El salario es: "<<salario<<endl;
		cout<<"\n El monto a pagar de iggs es: "<<iggs<<endl;
	}
	else{
		salario=(horasextras*43.50)+2900;
		iggs = (ciggs*salario)/100;
		cout<<"\n El salario es: "<<salario<<endl;
		cout<<"\n El monto a pagar de iggs es: "<<iggs<<endl;
		
	}
		system("pause");
		return 0;
	}
	
	void escribir(){
		
		ofstream archivo;
		archivo.open("archivo.txt",ios::out);
		
		if(archivo.fail()){
			cout<<"No se pudo abrir el archivo";
			exit(1);
		}
		
		archivo<<"Creando un archivo de salarios Marcelo"<<endl;
		archivo<<"Agregando mas texto al archivo";
		
		archivo.close();
	}
