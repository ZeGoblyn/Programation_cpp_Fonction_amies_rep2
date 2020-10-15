#include<stdio.h>
#include<iostream>
#include"Vect.h"

//BUT Création d'un vecteur 3d
//ENTREE Trois valeur doubles
//SORTIE Un vecteur
vect::vect(double c1, double c2, double c3)
{
	this->dx = c1;
	this->dy = c2;
	this->dz = c3;
}

//BUT Afficher les coordonées d'un vecteur
//ENTREE Un vecteur
//SORTIE Une sortie console indiquant ses X, Y et Z
void vect::affichageV()
{
	std::cout << "Coordonees du vecteur" << this->dx << "," << this->dy << "," << this->dz << std::endl;
}