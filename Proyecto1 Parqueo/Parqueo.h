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
	

	string toString();

	void creaParqueo();

};

