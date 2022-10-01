#ifndef CYLINDER_H
#define CYLINDER_H
class Cylinder{

private:
	
	double raio;
	double h;
	double calcLateral;
	double areaTotal;
	double volume;
	double pi=3.14;
public:
	Cylinder();
	void setRaio(double);
	double getRaio()const;

	void setH(double);
	double getH()const;

	double getCalcLateral()const;

	double getAreaTotal()const;

	double getVolume()const;

};
#endif
