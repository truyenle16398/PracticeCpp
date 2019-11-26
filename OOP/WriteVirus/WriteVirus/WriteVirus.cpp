// WriteVirus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "DengueVirus.h"
//#include "FluVirus.h"
#include "Virus.h"
#include "Patient.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include<time.h>
#include <vld.h>

using namespace std;
int main()
{
	srand((int)time(0));
	Patient p;
	int t = 0;
	while (p.GetState() == 1)
	{
		cout << "Take Medicine (0 = NO, 1 = YES)";
		cin >> t;
		if (t == 1)
		{
			int min = 10;
			int max = 60;
			int medicine_resistance = min + (rand() % (int)(max + 1 - min)); 
			
			cout <<"Medicine: "<< medicine_resistance << endl;
			p.TakeMedicine();
		}
	}
	system("pause");
    return 0;

}

