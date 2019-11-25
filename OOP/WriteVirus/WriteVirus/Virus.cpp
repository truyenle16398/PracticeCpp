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
	m_dna = v.m_dna;
	m_resistance = v.m_resistance;
}

Virus::~Virus()
{
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
	for (int i = 0; i < dna.length(); i++)
	{
		this->m_dna[i] = dna[i];
	}
	fi.close();
	return 0;

}

void Virus::ReduceResistance(int medicine_resistance)
{
	m_resistance -= medicine_resistance;
}

