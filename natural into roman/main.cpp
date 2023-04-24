#include <iostream>
#include <conio.h>

int main()
{
	int natural[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	std::string roman[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
	std::cout << "Give a number to convert" << std::endl;
	int Ngiven;
	std::cin >> Ngiven;
	int temp = Ngiven;
	std::string Romanoutput;
	for (int i = 0; i < (sizeof(natural) / sizeof(int));)
	{
		if (natural[i] <= temp)
		{
			temp -= natural[i];
			Romanoutput += roman[i];
		}
		else ++i;
	}
	std::cout << "Number " << Ngiven << " in roman numerals is equal to " << Romanoutput << std::endl;
	return 0;
}