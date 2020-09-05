#include <iostream>
#include <stdio.h>

int clacAge(int year) 
{
    const int current_year = 2020;
    return current_year - year;
}

int main (void) 
{
    printf("%u", clacAge(1994));
    return(0);
}
