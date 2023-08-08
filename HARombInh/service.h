#ifndef _Service_h_
#define _Service_h_
#include <iostream>
#include <string>

int getIntSA();			
int getIntPos();		
int getIntPos(int BOTTOM_limit, int UP_limit, std::string comment);
int getIntPG();			
double getDblSA();		
double getDblPos();	
double getDblPG();			
int getRand(int Range_min, int Range_max);
double getRand(double Range_min, double Range_max);



template <typename any> void arrayConsoleOut(any arr[], int Size)
{
	std::cout << "\n[";
	for (int i = 0; i < Size; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
template <typename any> void fillArrayWithRandom(any arr[], int Size, any Range_min, any Range_max)
{
	for (int i = 0; i < Size; i++)
	{
		arr[i] = Get_Random(Range_min, Range_max);
	}
}

#endif