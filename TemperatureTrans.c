#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cf.h"

int main(int argc, char* argv[])	{
	if(argc ==  2 && IsDec(argv[1]))	{
		printf("the temperature is %.2f℃\n", f2c(atof(argv[1])));		
	}
	else if(argc == 3 && IsDec(argv[2]))	{
		if( strcmp(argv[1], "f2c")==0 )
			printf("the temperature is %.2f℃\n", f2c(atof(argv[2])));
		else if( strcmp(argv[1], "c2f") ==0 )
			printf("the temperature is %.2f°F\n", c2f(atof(argv[2])));
	}
	else	{
		printf("Usage:\n");
		printf("The second argument is \"c2f\" or \"f2c\"\n");
		printf("And the third argument is a positive real number.\n");
		printf("For example:\n");
		printf("    TemptureTrans   c2f 22\n");
		printf("    TemptureTrans   f2c 72\n");
	}
	return 0;
}
