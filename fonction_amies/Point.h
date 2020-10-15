#pragma once

#include<stdio.h>
#include<iostream>

class Point
//BUT Création de la classe point et déclaration des constructeur et classe amie "affichage"
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