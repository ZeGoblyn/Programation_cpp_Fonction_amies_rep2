#pragma once

#include<stdio.h>
#include<iostream>

class vecteur3d
//BUT Création d'une classe vecteur3d  et déclaration des constructeur et de la fonction amie "coincide"
//ENTREE
//SORTIE
{
private:
	float x, y, z;

public:
	vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0);

	friend void coincide(vecteur3d& v1, vecteur3d& v2);
};