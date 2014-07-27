#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float   c2f(float   fc)	{
	return (fc*9/5+32) ;
}

float   f2c(float   ff)	{
	return ((ff-32)*5/9);
}


int	IsDec(char* cInput)	{
	int iDotNum = 0;
	int iIntergerNum = 0;
	int iOther = 0;
	int iLength = strlen(cInput);
	int i = 0;
	for( ; i<iLength; i++)	{
		if(cInput[i] == '.')
			iDotNum++;
		else if(cInput[i]>='0' & cInput[i]<='9')
			iIntergerNum++;
		else
			iOther++;
	}
	if(iDotNum>=0 && iIntergerNum>0 && !iOther)
		return 1;
	else
		return 0;

}
