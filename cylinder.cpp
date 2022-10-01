#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<cmath>
#include "cylinder.h"

Cylinder::Cylinder(){
	
}

void Cylinder::setRaio(double aux){
	raio = aux;
}

double Cylinder::getRaio() const{
	return raio;
}

void Cylinder::setH(double aux) {
	h = aux;
}
double Cylinder::getH() const{
	return h;
}

double Cylinder::getCalcLateral() const{
	return (2*pi*raio*h);
}

double Cylinder::getAreaTotal() const{
	return (2*pi*raio*(h+raio));
}

double Cylinder::getVolume() const{
	return (pi*raio*raio*h);
}
