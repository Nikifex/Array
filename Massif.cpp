#include "Massif.h"

Massif:: Massif()
{
	number = 1;
	array = new double(number);
}

Massif::Massif(int val_number)
{
	set_value_number(val_number);
	array = new double(val_number);
}

Massif::~Massif()
{
	std::cout << "Array destroyed" << std::endl;
	delete[] array;
}

void Massif::set_value_number(int val_number)
{
	number = val_number;
	
}

void Massif::random_fill_and_print()
{
	srand(time(NULL));
	for (int i = 0; i <number; i++)
	{	
		int randnum = 1 + rand() % (1000);
		array[i] = randnum;
		

		
	}

	for (int a = 0; a < number; a++)
	{
		std::cout << "array[" << a << "] = " << array[a] << std::endl;
	}

	
}