#include "pch.h"
#include"iostream"
#include "windows.h"
#include "time.h"			

using namespace std;

int main()
{
	double s[11] = { 1,33,5,77,88,55,34,3,7,9,7 };

	int k;
	int i;
	for (i = 0; i <= 10; i++)
	{
		cout << s[i] << "\n";
	}
	k = 0;
	for (i = 0; i <= 10; i++)
	{
		if (s[i] >= 10.5)
		{
			k++;
		}
	}
	cout << "n:" << k << "\n";
}
