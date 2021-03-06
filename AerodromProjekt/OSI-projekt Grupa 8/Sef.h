#pragma once
#include <fstream>
#include "Korisnik.h"
#include "Let.h"

class Sef : public Korisnik
{
public:
	Sef(string, string, char susp = '0');

	void pregledRezervacija() const;
	void sedmicniIzvjestaj(std::vector<Let>& letovi) const;
	void mjesecniIzvjestaj(std::vector<Let>& letovi) const;
	void dnevniIzvjestaj(std::vector<Let>& letovi) const;
	void ispisDatoteke(std::fstream&) const;
};

bool provjeraUnesenogDatuma(string);