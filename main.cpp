#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<cmath>

#include "cylinder.h"
#include "testValue.h"


/*Desenvolva uma classe que modele um objeto cilindro em conformidade com o paradigma
orientado a objeto. Posteriormente implemente esta classe. A classe dever� ter as seguintes
caracter�sticas: raio, altura e c�lculo da �rea lateral, �rea total e volume. Obs.: os valores do
raio e da altura n�o podem ser negativos. O c�lculo da �rea lateral � (2*3.14*raio*altura),
�rea total (2*3.14*raio*(altura+raio)) e volume (3.14*raio*raio*altura).*/

using namespace std;
int main() {
	setlocale(LC_ALL, "PT_BR");
	testValue objeto;
	objeto.eng();
	return 0;

}