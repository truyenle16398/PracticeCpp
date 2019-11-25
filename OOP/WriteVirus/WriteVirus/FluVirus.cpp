#include "stdafx.h"
#include "FluVirus.h"
#include<iostream>
using namespace std;

#define BLUE 0x0000ff
#define RED 0xff0000

FluVirus::FluVirus()
{
}



FluVirus::~FluVirus()
{
}

FluVirus::FluVirus(int color)
{
	this->m_color = color;
}

void FluVirus::DoBorn()
{
	LoadADNInformation​();
	int r = rand();
	if (r % 2 == 0)
	{
		m_color = BLUE;
	}
	else m_color = RED;

}

Virus * FluVirus::DoClone()
{
	Virus *flu = new FluVirus(GetColor());
	flu->SetADN(GetADN());
	flu->SetResistance(GetResistance());
	return flu;
}

void FluVirus::DoDie()
{
	this->SetColor(0);
	this->SetADN(NULL);
	this->SetResistance(0);
}

void FluVirus::InitResistance()
{
	int r;
	if (m_color == RED)
	{
		 r = 10 + rand() % (20 + 1 - 10);

	}
	else
	{
		r = 10 + rand() % (15 + 1 - 10);
	}
	this->SetResistance(r);
}

void FluVirus::SetColor(int color)
{
	this->m_color = color;
}

int FluVirus::GetColor()
{
	return this->m_color;
}

