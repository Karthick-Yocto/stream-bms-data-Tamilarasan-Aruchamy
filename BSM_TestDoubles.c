#include "SignalProvider.h"
#include <stddef.h>

char* Test_ConsoleOutput=NULL;
int printf_Func_CallCount=0;



int ResetTestInterface()
{

Test_ConsoleOutput=NULL;
printf_Func_CallCount=0;

return 0;
}

int Rand()
{
	static int Itr=0;
	int RandomValue=0;
	for(;Itr<15;Itr++)
	{
		if(!(Itr%2))
		{
			RandomValue=Itr;
		}
		else
		{
			RandomValue=UINT32_MAX-Itr;
		}
	}
	return RandomValue;
}


int printf(char* ConsoleOutput)
{
	Test_ConsoleOutput=ConsoleOutput;
	printf_Func_CallCount++;
	return 0;
}

