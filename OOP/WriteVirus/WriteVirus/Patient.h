#pragma once
#include "Virus.h"
#include<iostream>
#include<list>
using namespace std;

class Patient
{
private:
	int m_resistance;
	list <Virus*> m_virusList;
	int m_state;
public:
	Patient();
	~Patient();
	Patient(int, list<Virus*>, int);

	void SetResistance(int);
	int GetResistance();
	void SetState(int);
	int GetState();

	int InitResistance();
	void DoStart();
	void TakeMedicine();
	void DoDie();
	

};

