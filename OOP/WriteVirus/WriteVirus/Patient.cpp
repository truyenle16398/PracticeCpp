#include "stdafx.h"
#include "Patient.h"
#include "FluVirus.h"
#include "DengueVirus.h"
#include<iostream>
#include<list>
using namespace std;


Patient::Patient()
{
}


Patient::~Patient()
{
	InitResistance();
	DoStart();
}

Patient::Patient(int resis, list<Virus*> list, int state)
{
	this->m_resistance = resis;
	this->m_virusList = list;
	this->m_state = state;
}

void Patient::SetResistance(int resistance)
{
	this->m_resistance = resistance;
}

int Patient::GetResistance()
{
	return this->m_resistance;
}

int Patient::InitResistance()
{
	this->m_resistance = 1000 + rand() % (9000 + 1 - 1000);
	return this->m_resistance;
}

void Patient::DoStart()
{
	m_state = 1;
	int amountVirus = 10 + rand() % (20 + 1 - 10);
	for (int i = 0; i < amountVirus; i++)
	{
		int kindOfVirus = rand();
		if (kindOfVirus % 2 == 0)
		{
			Virus *virusFlu = new FluVirus();
			this->m_virusList.push_back(virusFlu);
		}
		else
		{
			Virus *virusDengue = new DengueVirus();
			this->m_virusList.push_back(virusDengue);
		}
	}
}
void Patient::DoDie()
{
	m_virusList.clear();
	m_state = 0;
}

void Patient::SetState(int state)
{
	this->m_state = state;
}

void Patient::TakeMedicine()
{
	//list<Virus*> myList;
	list<Virus*>::iterator it;
	for (it = m_virusList.begin(); it != m_virusList.end(); it++) {
		(*it)->ReduceResistance(1+rand()%(60+1-1));
		if ((*it)->GetResistance() > 0)
		{
			//(*it)->DoClone();
			this->m_virusList.push_back((*it)->DoClone());//!!!!!note!!!!!
		}
		else
		{
			(*it)->DoDie();
		}
	}
}

int Patient::GetState()
{
	return this->m_state;
}
