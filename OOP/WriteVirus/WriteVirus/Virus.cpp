#include "stdafx.h"
#include "Virus.h"
#include<iostream>
#include <fstream>
#include <string>


using namespace std;


Virus::Virus()
{
}

Virus::Virus(char * m_dna1, int m_res)
{
	m_dna = m_dna1;
	m_resistance = m_res;
}


Virus::Virus(Virus & v)
{
	this->m_dna = v.m_dna;
	this->m_resistance = v.m_resistance;
}

Virus::~Virus()
{
	//DoDie();
}

int Virus::LoadADNInformation​()
{
	ifstream fi;
	fi.open("ATGX.bin", ios::in);
	if (fi.fail())
	{
		cout << "Can't load from file" << endl;
		return -1;
	}
	string dna;
	getline(fi, dna);
	this->m_dna = new char[dna.length() + 1];
	for (int i = 0; i < dna.length(); i++)
	{
		this->m_dna[i] = dna[i];
	}
	fi.close();
	return 0;

}

int Virus::ReduceResistance(int medicine_resistance)
{
	return this->m_resistance -= medicine_resistance;
	/*if (m_resistance <= medicine_resistance)
	{
		cout << "The virus was destroyed."<<endl;
	}*/
	//cout << "con lai:" << this->m_resistance << endl;
}

void Virus::SetADN(char *adn)
{
	this->m_dna = adn;
}

char *Virus::GetADN()
{
	return this->m_dna;
}

void Virus::SetResistance(int resistance)
{
	this->m_resistance = resistance;
}

int Virus::GetResistance()
{
	return this->m_resistance;
}
