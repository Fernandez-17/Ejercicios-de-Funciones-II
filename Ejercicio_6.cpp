/*6. Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y
tijeras contra la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora
generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las
reglas del juego. El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el
resultado final indicando el ganador del juego.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int seleccion_de_usuario, computadora;
	
	srand(time(0));
	
    printf("Selecciona una opcion: 1)Piedra 2)Papel 3)Tijera ");
    cin >> seleccion_de_usuario;

	computadora = (rand()%2)+1;
	
	if(seleccion_de_usuario==2 && computadora==1) {
		cout << "Ganaste";
	} else if(seleccion_de_usuario==3 && computadora==2) {
		cout << "Ganaste";
	} else if(seleccion_de_usuario==1 && computadora==3) {
		cout << "Ganaste";
	} else if(seleccion_de_usuario==computadora){
		cout << "Empate";
	} else {
    	cout << "Perdiste";
	}

	return 0;
}
