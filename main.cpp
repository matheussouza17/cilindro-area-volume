#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<cmath>

#include "cylinder.h"
#include "testValue.h"


/*Desenvolva uma classe que modele um objeto cilindro em conformidade com o paradigma
orientado a objeto. Posteriormente implemente esta classe. A classe deverá ter as seguintes
características: raio, altura e cálculo da área lateral, área total e volume. Obs.: os valores do
raio e da altura não podem ser negativos. O cálculo da área lateral é (2*3.14*raio*altura),
área total (2*3.14*raio*(altura+raio)) e volume (3.14*raio*raio*altura).*/

using namespace std;
int main() {
	setlocale(LC_ALL, "PT_BR");
	testValue objeto;
	objeto.eng();
	return 0;

}