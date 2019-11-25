#pragma once
class Virus
{
private: 
	char* m_dna;
	int m_resistance;
public:
	Virus();
	Virus(char *m_dna1, int m_res);
	//Copy contrustor
	Virus(Virus &v);
	~Virus();
	int LoadADNInformation​();
	void ReduceResistance(int medicine_resistance);
	virtual void DoBorn();
};

