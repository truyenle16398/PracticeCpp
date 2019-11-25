#pragma once
class Virus
{
private: 
	char* m_dna;
	int m_resistance;
public:
	Virus();
	Virus(char*, int);
	//Copy contrustor
	Virus(Virus&);
	~Virus();

	int LoadADNInformation​();
	int ReduceResistance(int);

	void SetADN(char*);
	char *GetADN();
	void SetResistance(int);
	int GetResistance();

	virtual void DoBorn() = 0;
	virtual Virus *DoClone() = 0;
	virtual void DoDie() = 0;
	virtual void InitResistance() = 0;
};

