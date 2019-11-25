#pragma once
#include "Virus.h"
class DengueVirus :
	public Virus
{
private:
	char *m_protein = new char[4];
public:
	DengueVirus();
	~DengueVirus();
	DengueVirus(char*);

	void SetProtein(char*);
	char *GetProtein();

	void DoBorn();
	Virus *DoClone();
	void DoDie() override;
	void InitResistance();

};

