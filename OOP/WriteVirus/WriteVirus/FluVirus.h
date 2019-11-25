#pragma once
#include "Virus.h"
class FluVirus :
	public Virus
{
private:
	int m_color;
public:
	FluVirus();
	~FluVirus();
	FluVirus(int);
	void DoBorn();
	Virus *DoClone();
	void DoDie();
	void InitResistance();
	void SetColor(int);
	int GetColor();
};

