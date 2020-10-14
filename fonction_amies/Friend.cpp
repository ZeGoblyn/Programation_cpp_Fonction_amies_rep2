#include<stdio.h>
#include<iostream>
#include"Point.h"

//--------------------------------------------------------------------------------------------------------------------------------------------
//81
void affichage(Point& pt)
{
	std::cout << "Les cordonnees du point sont" << pt.X << "," << pt.Y << std::endl;
}