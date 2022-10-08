//MATIAS QUESADA VILCHEZ 1-1885-0420
//ROLANDO ROJAS MORALES 4-0262-0297
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
	void case5(string);
	string case6();
	void case7();
	void case8();
	void case9();
	void case10();
	void case11();
	int case12();
	void case13();
	void case14();
	void case15();
	void case16();
	void case18();


	string toString();

	
	

};

