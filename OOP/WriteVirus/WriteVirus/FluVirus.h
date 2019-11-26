#pragma once
#include "Virus.h"
#include<list>
class FluVirus :
	public Virus
{
private:
	int m_color;
public:
	FluVirus();
	~FluVirus();
	FluVirus(int);

	void SetColor(int);
	int GetColor();

	void DoBorn();
	Virus *DoClone();
	void DoDie() override;
	void InitResistance();
	
};

