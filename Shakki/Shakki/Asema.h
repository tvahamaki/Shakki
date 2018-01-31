#pragma once

#include "Nappula.h"
#include "Sotilas.h"
#include "Siirto.h"

class Asema{

public:
	Asema();
	Nappula* lauta[8][8];

	// VIIKKO 2
	void paivitaAsema(Siirto* siirto);
	int getSiirtovuoro();
	void setSiirtovuoro(int vari);
	bool getOnkoValkeaKuningasLiikkunut();
	bool getOnkoMustaKuningasLiikkunut();
	bool getOnkoValkeaDTliikkunut();
	bool getOnkoValkeaKTliikkunut();
	bool getOnkoMustaDTliikkunut();
	bool getOnkoMustaKTliikkunut();

	// VIIKKO 3
	void annaLaillisetSiirrot(std::list<Siirto>& lista);

private:
	static Nappula vk;
	static Nappula vd;
	static Nappula vt;
	static Nappula vl;
	static Nappula vr;
	static Sotilas vs;

	static Nappula mk;
	static Nappula md;
	static Nappula mt;
	static Nappula ml;
	static Nappula mr;
	static Nappula ms;

	// VIIKKO 2
	int siirtovuoro;
	bool onkoValkeaKuningasLiikkunut;
	bool onkoMustaKuningasLiikkunut;
	bool onkoValkeaDTliikkunut;
	bool onkoValkeaKTliikkunut;
	bool onkoMustaDTliikkunut;
	bool onkoMustaKTliikkunut;
};