#include<stdio.h>
#include<iostream>
#include"Point.h"

int main()
{
	int x, y;

	//-------------------------------------------------------------------------------------------------------------------------------------
	//81
	Point pt1(7, 4);

	affichage(pt1);

	std::cout << "Entrer la coordonne X du point" << std::endl;
	std::cin >> x;
	std::cout << "Entrer la coordonne Y du point" << std::endl;
	std::cin >> y;

	Point pt2(x, y);

	affichage(pt2);

	return 0;
}