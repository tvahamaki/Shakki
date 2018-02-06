#pragma once
#include <string>
#include <list>
#include "Ruutu.h"
#include "Siirto.h"
//#include "Asema.h"

class Asema;

// Vakioarvot nappulatyypeille.
enum
{
	VT,VR,VL,VD,VK,VS,
	MT,MR,ML,MD,MK,MS
};

class Nappula{

private:
	std::wstring _unicode;
	int _vari; // valkea = 0, musta = 1
	int _koodi; // VT, VR, MT tms.
public:
	Nappula(std::wstring, int, int);
	Nappula(){};
	void setKoodi(int);
	int getKoodi();
	void setUnicode(std::wstring);
	std::wstring getUnicode();
	void setVari(int);
	int getVari();
	virtual void annaSiirrot(std::list<Siirto>& lista, Ruutu*, Asema*, int vari) = 0;
};
