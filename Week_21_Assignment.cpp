// Week_21_Assignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Patient
{
	int patientId;
	float temperature;
	int pulse;
	int respiration;
	int bloodSys;
	int bloodDia;
};

void main(int argc, char *argv[])
{
	struct Patient record;
	FILE *fp;

	record.patientId= atoi(argv[1]);
	record.temperature = atof(argv[2]);
	record.pulse = atoi(argv[3]);
	record.respiration = atoi(argv[4]);
	record.bloodSys = atoi(argv[5]);
	record.bloodDia = atoi(argv[6]);

	fp = fopen("F:\\patients.txt", "a");
	fprintf(fp, "%s %s\t%d\t%f\t%d\t%d\t%d\t%d\n", __DATE__, __TIME__, record.patientId, record.temperature, record.pulse, record.respiration, record.bloodSys, record.bloodDia);
	
	fclose(fp);
}





