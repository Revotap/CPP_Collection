/*
    Author: Leon Grell
    Description: Simple test programm to see the inheritance working
*/
#include <iostream>

#include "Audio.h"
#include "Picture.h"

int main()
{
    Media* array[2];

    array[0] = new Audio("The Audio", 2002, "Thomas", 12);
    array[1] = new Picture("The Picture", 2016, "Dortmund");

    array[0]->printData();
    array[1]->printData();

    return 0;
}
