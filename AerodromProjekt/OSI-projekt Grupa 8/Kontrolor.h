#pragma once
#include <string>
#include <fstream>
#include "Korisnik.h"
#include "Let.h"
#include <vector>

class Kontrolor : public Korisnik
{
public:
	Kontrolor(string, string, char susp = '0');

	void kreirajLet(std::vector<Let>&);
	void izmjenaStatusa(std::vector<Let>&);
	void informacijeLet(std::vector<Let>&);
	void otkazivanjeLeta(std::vector<Let>&);

private:
	bool provjeraSifre(Let&, std::vector<Let>&);
	bool provjeraVremena(Let&, std::vector<Let>&);
	void azurirajRaspored(const Let&);
	void promijeniRaspored(std::vector<Let>&);
};
