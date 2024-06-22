/*4. Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule
las raíces de una ecuación cuadrática utilizando la fórmula general. 
Utiliza la función sqrt de la librería cmath para calcular la raíz cuadrada. 
Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.*/
#include<iostream>
#include<cmath> 

using namespace std;
int main( ){
	float a,b,c,discriminante,raiz_de_discriminante,raiz_1,raiz_2;
	cout<<"Ingrese el coeficiente del termino cuadratico: ";
	cin>>a;
	cout<<"Ingrese el coeficiente del termino lineal: ";
	cin>>b;
	cout<<"Ingrese el valor del termino independiente: ";
	cin>>c;
	discriminante=pow(b,2)-(4*a*c);
	raiz_de_discriminante=sqrt(discriminante);
	raiz_1= (-b+raiz_de_discriminante)/(2*a);
	raiz_2= (-b-raiz_de_discriminante)/(2*a);
	cout<<"Las raices de su ecuacion cuadratica son: "<<endl;
	cout<<"Raiz 1: "<<raiz_1<<endl;
	cout<<"Raiz 2: "<<raiz_2<<endl;	
	
	return 0;
}
