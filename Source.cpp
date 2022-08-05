#include "Massif.h"
#include <iostream>
int main()
{
    int ab;
    //int* ab = new int;
    std::cout << "Input the volume of array: " << std::endl;
    std::cin >> ab;
    Massif* aray = new Massif(ab);
    aray->random_fill_and_print();
    //delete ab;
    delete aray;
    return 0;
}