#include<stdio.h>
#include<iostream>
#include"Point.h"
#include"Vecteur3d.h"

int main()
{
	int x, y;

	//-------------------------------------------------------------------------------------------------------------------------------------
	//81
	Point pt1(7, 4);
	//Point* pt3 = new Point(4, 4)

	affichage(pt1);

	std::cout << "Entrer la coordonne X du point" << std::endl;
	std::cin >> x;
	std::cout << "Entrer la coordonne Y du point" << std::endl;
	std::cin >> y;

	Point pt2(x, y);

	affichage(pt2);
	//affichage(*pt3);


	//-------------------------------------------------------------------------------------------------------------------------------------
	//82
	vecteur3d v1(1.0, 2.3, 2.1);

	vecteur3d v2(8.1, 7.0, 2.0);

	coincide(v1, v2);

	//-------------------------------------------------------------------------------------------------------------------------------------
	//83


	return 0;
}