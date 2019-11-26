#include "stdafx.h"
#include "Patient.h"
#include "FluVirus.h"
#include "DengueVirus.h"
#include<iostream>
#include<list>
using namespace std;

Patient::Patient()
{
	InitResistance();
	DoStart();
}


Patient::~Patient()
{
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
	int countFlu = 0, countDen = 0;
	int amountVirus = 10 + rand() % (20 + 1 - 10);
	cout << "Amount Virus: " << amountVirus << endl;
	for (int i = 0; i < amountVirus; i++)
	{
		int kindOfVirus = rand();
		if (kindOfVirus % 2 == 0)
		{
			Virus *virusFlu = new FluVirus();
			this->m_virusList.push_back(virusFlu);
			//cout << "Added Flu" << endl;
			countFlu++;
		}
		else
		{
			Virus *virusDengue = new DengueVirus();
			this->m_virusList.push_back(virusDengue);
			//cout << "Added Den" << endl;
			countDen++;
		}
	}
	cout << "Flu: " << countFlu << endl << "Den: " << countDen << endl;
	
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
	list<Virus*>::iterator it1,it2;

	int amountVirus = m_virusList.size();
	it1 = it2 = m_virusList.begin();
	for (int i = 0; i < m_virusList.size(); i++)
	{
		it2++;
		(*it1)->ReduceResistance(1 + rand() % (60 + 1 - 1));
		if ((*it1)->GetResistance() > 0)
		{
			this->m_virusList.push_back((*it1)->DoClone());
		}
		else
		{
			(*it1)->DoDie();
			this->m_virusList.erase(it1);
			it1 = it2;
		}
	}
	//cout << "so luong ban dau: " << amountVirus << endl;

	/*for (it = m_virusList.begin(); it != m_virusList.end();) {

		(*it)->ReduceResistance(1+rand()%(60+1-1));

		if ((*it)->GetResistance() > 0) {

			this->m_virusList.push_back((*it)->DoClone());
			//cout << "add" << endl;
		}
		else
		{
			(*it)->DoDie();
			this->m_virusList.erase(it);
			it++;
			//cout << "died" << endl;
			//m_virusList.remove(nullptr);
		}
	}*/
	cout <<"Amount Virus after TakeMedicine: " <<this->m_virusList.size()<< endl;
}

int Patient::GetState()
{
	return this->m_state;
}
