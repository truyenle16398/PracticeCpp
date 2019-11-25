#include "stdafx.h"
#include "DengueVirus.h"
#include<iostream>
using namespace std;

DengueVirus::DengueVirus()
{
	DoBorn();
	InitResistance();
}

DengueVirus::~DengueVirus()
{
	DoDie();
}

DengueVirus::DengueVirus(char *pro)
{
	this->m_protein = pro;
}

void DengueVirus::SetProtein(char *pro)
{
	this->m_protein = pro;
}

char * DengueVirus::GetProtein()
{
	return this->m_protein;
}



void DengueVirus::DoBorn()
{
	LoadADNInformation​();
	int r = rand();
	if (r % 3 == 0)
	{
		SetProtein("NS3");
	}
	else if (r % 3 == 1)
	{
		SetProtein("NS5");
	}
	else
	{
		SetProtein("E");
	}
}

Virus * DengueVirus::DoClone()
{
	Virus *den = new DengueVirus(GetProtein());
	den->SetADN(GetADN());
	den->SetResistance(GetResistance());
	return den;
}

void DengueVirus::DoDie()
{
	SetADN(NULL);
	SetProtein(NULL);
	SetResistance(0);
}

void DengueVirus::InitResistance()
{
	int r;
	if (m_protein == "ES3")
	{
		r = 1 + rand() % (10 + 1 - 1);

	}
	else if (m_protein == "ES5")
	{
		r = 11 + rand() % (20 + 1 - 11);
	}
	else
	{
		r = 21 + rand() % (30 + 1 - 21);
	}
	this->SetResistance(r);
}
