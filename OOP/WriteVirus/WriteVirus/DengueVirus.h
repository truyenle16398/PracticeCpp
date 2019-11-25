#pragma once
#include "Virus.h"
class DengueVirus :
	public Virus
{
private:
	int m_protein[4];
public:
	DengueVirus();
	~DengueVirus();
	void DoBorn();
};

