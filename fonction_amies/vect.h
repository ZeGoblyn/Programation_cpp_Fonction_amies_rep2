#pragma once

#include<stdio.h>
#include<iostream>
#include"matrice.h"

class matrice;
class vect
//BUT Création d'une nouvelle classe vecteur et déclartion des constructeurs, fonction d'affichage et fonction amia "prod"
//ENTREE
//SORTIE
{
private:
	double dx, dy, dz;

public:
	vect(double c1 = 0.0, double c2 = 0.0, double c3 = 0.0);

	void affichageV();

	friend vect prod(matrice, vect);
};