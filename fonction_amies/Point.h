#pragma once

#include<stdio.h>
#include<iostream>

class Point
//BUT Cr�ation de la classe point et d�claration des constructeur et classe amie "affichage"
//ENTREE
//SORTIE
{
private:
	int X, Y;

	int abs;
	int ord;

	static int comptP;

public:
	Point(int abs = 0, int ord = 0);

	//81
	friend void affichage(Point& pt);

};