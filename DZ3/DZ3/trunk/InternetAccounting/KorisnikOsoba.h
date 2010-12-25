#pragma once
#include "Korisnik.h"
using namespace System;

ref class KorisnikOsoba : Korisnik
{
	String ^_ime, ^_prezime, ^_broj_licne_karte;
public:
	KorisnikOsoba (bool modem, String ^username, String ^naziv_paketa, String ^adresa, String ^password, String ^telefon, String ^ime, String ^prezime, String ^broj_licne_karte) 
		: Korisnik (modem, username, naziv_paketa, adresa, password, telefon), _ime (ime), _prezime (prezime), _broj_licne_karte (broj_licne_karte) {}

	String ^Ime () { return _ime; }
	void Ime (String ^val) { _ime = val; }

	String ^Prezime () { return _prezime; }
	void Prezime (String ^val) { _prezime = val; }

	String ^Broj_licne_karte ()  { return _broj_licne_karte; }
	void Broj_licne_karte (String ^val) { _broj_licne_karte = val; }

	virtual String ^Print () override;
};
