﻿// WriteVirus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "DengueVirus.h"
//#include "FluVirus.h"
#include "Virus.h"
#include "Patient.h"
#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
int main()
{
	Patient p;
	char t = 0;
	while (p.GetState() == 1)
	{
		/*printf(​"Take Medicine (0 = NO, 1 = YES"​);
		scanf(​"%c"​, &t);
		if​(t == 1)
		{
			int​ min = 1;
			int​ max = 60;
			int​ medicine_resistance = min + (rand() % (​int​)(max - min + 1))
				p.TakeMedicine(medicine_resistance);
		}*/
		cout << "Take Medicine (0 = NO, 1 = YES)";
		cin >> &t;
		if (t == 1)
		{
			int min = 10;
			int max = 60;
			int medicine_resistance = min + (rand() % (int)(max + 1 - min)); 
			p.TakeMedicine();
		}
	}
	system("pause");
    return 0;

}

