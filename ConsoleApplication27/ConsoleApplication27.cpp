#include "pch.h"
#include"iostream"
#include "windows.h"
#include "time.h"			

using namespace std;

int main()
{
	double p[15] = { 1,33,5,77,88,55,34,3,7,9,7,8,0,11,555,5 };

	int k;
	int i;
	for (i = 0; i <= 14; i++)
	{
		cout << p[i] << "\n";
	}
	k = 0;
	for (i = 0; i <= 14; i++)
	{
		if (p[i] >= 10.5)
		{
			k++;
		}
	}
	cout << "n:" << k << "\n";
}
