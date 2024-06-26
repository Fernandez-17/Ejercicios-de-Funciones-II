/*5. Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada
calcularRaices que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde
se almacenarán las raíces por referencia. Además, incluye una variable por referencia que indique si
las raíces son reales o complejas. La función debe calcular las raíces utilizando la fórmula general y
actualizar las variables correspondientes.*/
#include<iostream>
#include<cmath> 

using namespace std;
int main( ){
	float a,b,c,discriminante,raiz_de_discriminante,raiz_1,raiz_2,raiz_unica,parte_real,parte_imaginaria;
	cout<<"Ingrese el coeficiente del termino cuadratico: ";
	cin>>a;
	cout<<"Ingrese el coeficiente del termino lineal: ";
	cin>>b;
	cout<<"Ingrese el valor del termino independiente: ";
	cin>>c;
	
	discriminante=pow(b,2)-(4*a*c);
	if (discriminante>0){
		
	    cout<<"La ecuación cuadrática tiene dos raíces reales distintas."<<endl;
	    raiz_de_discriminante=sqrt(discriminante);
	    raiz_1= (-(b)+raiz_de_discriminante)/(2*a);
	    raiz_2= (-(b)-raiz_de_discriminante)/(2*a);
	    cout<<"Las raices de su ecuacion cuadratica son: " <<endl;
	    cout<<"Raiz 1: "<<raiz_1<<endl;
	    cout<<"Raiz 2: "<<raiz_2<<endl;		
	} else if(discriminante==0){
		cout<<"La ecuación cuadrática tiene raíces reales iguales." <<endl;
		raiz_unica=-(b)/(2*a);
		cout<<"La ecuacion dos raices iguales: " <<raiz_unica<<endl;
		cout<<"Raiz 1: "<< raiz_unica << endl;
	    cout<<"Raiz 2: "<< raiz_unica << endl;	
	    } else{
	    	 cout<<"La ecuación cuadrática tiene raíces complejas (imaginarias)." <<endl;
	    	 parte_real= -(b)/(2*a);
	    	 parte_imaginaria=sqrt(-discriminante)/(2*a);
	    	 cout<<"Parte real de la raiz: "<< parte_real << endl;
	    	 
	    	 cout<<"Parte imaginaria de la raiz: "<< parte_imaginaria << endl;
	    	 
	    	 cout<<"Raiz 1: "<<parte_real << " + i " << parte_imaginaria << endl;
	    	 
	    	 cout<<"Raiz 2: "<<parte_real << " - i " << parte_imaginaria << endl;	 
	    }
		   	
	return 0;
}