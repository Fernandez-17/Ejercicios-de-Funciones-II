/*1. Cálculo del Área de un Círculo: Implementa un programa que calcule el área de
 un círculo dado suradio. Utiliza la constante M_PI de la librería cmath para obtener 
 el valor de pi. Solicita al usuario el radio del círculo y utiliza la función pow 
 de cmath para calcular el cuadrado del radio. Muestra el resultado del área 
 calculada*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {

	double radio,area;
	cout << "Ingrese el radio del circulo: ";
	cin  >> radio;
	area= M_PI * pow(radio,2);
	cout << "El area del circulo es: " << area;

	return 0;
}