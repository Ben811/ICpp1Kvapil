#pragma once

#ifndef UCTENKA_H
#define UCTENKA_H

class Uctenka {
private:
	int cisloUctenky;
	double castka;
	double dph;
public:
	Uctenka() {};
	Uctenka(int cisloUctenky, double dph, double castka) {};

	//Setters 
	void setCisloUctenky(int a) {};
	void setCastka(double a) {};
	void setDph(double a) {};
	// Getters
	int getCisloUctenky() {};
	double getCastka() {};
	double getDph() {};

	


};

// TODO: 
//Vytvo�te t��du Uctenka, kter� obsahuje priv�tn� atributy:
//int cisloUctenky(unik�tn� identifik�tor ��tenky), 
//double castka(��stka bez dph),
//double dph(sazba dph v procentech).
//Vytvo�te metody pro �ten� a nastaven� atribut�.

#endif UCTENKA_H