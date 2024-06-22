/*3. Cálculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un triángulo rectángulo
utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función
sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el
resultado de la hipotenusa calculada.*/
#include<iostream>
#include<cmath>
 using namespace std;
 int main( ){
 	double cateto_uno,cateto_dos,suma,hipotenusa;
 	cout<<"Ingrese la medidas de los catetos del triangulo: "<<endl;
	cin>>cateto_uno;
	cout<<"Cateto uno: "<< cateto_uno<<endl;
	cin>>cateto_dos;
	cout<<"Cateto uno: "<< cateto_dos<<endl;
	suma=pow(cateto_uno,2) + pow(cateto_dos,2);
	hipotenusa=sqrt(suma);
	cout<<"La hipotenusa del triangulo es: "<<hipotenusa<< endl;
 	return 0;
 }