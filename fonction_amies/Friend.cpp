#include<stdio.h>
#include<iostream>
#include"Point.h"
#include"Vecteur3d.h"

//--------------------------------------------------------------------------------------------------------------------------------------------
//81
void affichage(Point& pt)
{
	std::cout << "Les cordonnees du point sont" << pt.X << "," << pt.Y << std::endl;
}

//-----------------------------------------------------------------------------------------------------------------------------------------
//82
void coincide(vecteur3d& v1, vecteur3d& v2)
{
	if ((v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z))
	{
		std::cout << "Les vecteurs coincident." << std::endl;
	}
	else
	{
		std::cout << "Les vecteurs ne coincident pas." << std::endl;
	}
}