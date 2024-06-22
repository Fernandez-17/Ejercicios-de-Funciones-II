/*2. Generador de Números Aleatorios: Crea un programa que genere
 y muestre una serie de númerosaleatorios entre 0 y un número
máximo especificado por el usuario. El programa solicitará al usuario
la cantidad de números aleatorios que desea generar y el valor máximo
 permitido. Utiliza la funciónrand de la librería cstdlib para generar
  los números aleatorios.*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

 int main( ){
 	int n,num_max;
 	srand(time(0));
 	cout <<"Ingrese la cantidad de numeros aleatorios que desee: "<< endl;
 	cin>>n;
 	cout<<"Ingrese el maximo numero aleatorio: "<< endl;
 	cin>>num_max;
 	for (int i=0 ;i< n;i++){
 		
 		cout<< rand()% num_max << endl;
	 }	
 	return 0;
 }
