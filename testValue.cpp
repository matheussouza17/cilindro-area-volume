#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<cmath>
#include "testValue.h"

using namespace std;
testValue::testValue() {

}

void testValue::eng(){
	double aux;
	do {
		printf("Digite o valor do raio: ");
		cin >> aux;
		obj.setRaio(aux);
	} while (obj.getRaio()<0.0);

	do {
		printf("Digite o valor da altura: ");
		cin >> aux;
		obj.setH(aux);
	} while (obj.getH() < 0.0);

	printf("�rea lateral: %.2f\n",obj.getCalcLateral());
	printf("�rea total: %.2f\n",obj.getAreaTotal());
	printf("�rea volume: %.2f\n",obj.getVolume());

}
