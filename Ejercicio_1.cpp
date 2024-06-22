/*1. Cálculo del Área de un Círculo: Implementa un programa que calcule el área de
 un círculo dado suradio. Utiliza la constante M_PI de la librería cmath para obtener 
 el valor de pi. Solicita al usuario el radio del círculo y utiliza la función pow 
 de cmath para calcular el cuadrado del radio. Muestra el resultado del área 
 calculada*/

#include <iostream>
#include <cmath>
using namespace std;

double calcularArea(double radio){

	double pi = M_PI;
	return pi * pow(radio, 2);
}

int main() {

	double radio, resultado;
	cout << "Ingrese el radio del circulo: ";

	cin >> radio;

	resultado = calcularArea(radio);

	cout << "El area del circulo es: " << resultado;

	return 0;
}