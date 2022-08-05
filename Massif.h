#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>


class Massif
{	
    private:
		int number;
		double* array;
		
	public:
		Massif();
		
		Massif(int val_number);
		
		~Massif();
		
		void set_value_number(int val_number);

		void random_fill_and_print();

		


		
};

