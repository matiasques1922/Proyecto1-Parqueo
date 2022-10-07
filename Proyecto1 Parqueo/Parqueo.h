#pragma once
#include "InfoDelCampo.h"
class Parqueo
{
private:
	InfoDelCampo** vecP;
	int cant;
	int tam;
	
public:
	Parqueo(int n);
	virtual ~Parqueo();

	int getCant();
	int getTam();
	InfoDelCampo* getVec(int);

	void vehiculoPago(string);

	string case1();
	string case2();
	string case3();
	void case4();
	string case5(string);
	string case6();

	string toString();

	
	

};

