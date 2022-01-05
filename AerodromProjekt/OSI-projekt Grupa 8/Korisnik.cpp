#include "Korisnik.h"

Korisnik::Korisnik() 
{

}

Korisnik::Korisnik(string korIme, string korLozinka, char tipNaloga) : tip(tipNaloga)
{
	if (korIme.length() > 20 || korLozinka.length() > 20)
		throw "Predugacko korisnicko ime ili sifra, dozvoljeno 20 karaktera!";
	else
	{
		for (int i = 0; i < korIme.length(); i++)
		{
			ime[i] = korIme.at(i);
		}
		for (int i = 0; i < korLozinka.length(); i++)
		{
			lozinka[i] = korLozinka.at(i);
		}
	}
}

string Korisnik::getIme() const
{
	return ime;
}

char Korisnik::getTip() const
{
	return tip;
}

void Korisnik::upisiuFajl(ostream& os) const
{
	os.write(ime, sizeof(ime));
	os.write(lozinka, sizeof(lozinka));
	os.write(&tip, sizeof(tip));
}

void Korisnik::ucitajizFajla(ifstream& is) const
{
	is.read(const_cast<char*> (ime), sizeof(ime));
	is.read(const_cast<char*> (lozinka), sizeof(lozinka));
	is.read(const_cast<char*> (&tip), sizeof(tip));
}