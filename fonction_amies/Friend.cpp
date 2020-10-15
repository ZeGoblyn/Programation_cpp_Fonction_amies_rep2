#include<stdio.h>
#include<iostream>
#include"Point.h"
#include"Vecteur3d.h"
#include"matrice.h"
#include"vect.h"

//--------------------------------------------------------------------------------------------------------------------------------------------
//81
//BUT Afficher les coordonées d'un point
//ENTREE Les coordonees X et Y d'un point créer
//SORTIE Une annonce console indiqquant les dites coordonées
void affichage(Point& pt)
{
	std::cout << "Les cordonnees du point sont" << pt.X << "," << pt.Y << std::endl;
}

//---------------------------------------------------------------------------------------------------------------------------------------------
//82
//BUT Indiquer sir deux vecteurs coincident ou non
//ENTREE Deux vecteurs
//SORTIE Annonce console confirmant ou infirmant la coincidense des deux vecteurs
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

//---------------------------------------------------------------------------------------------------------------------------------------------
//83
//BUT la création d'un vecteur par matrice
//ENTREE Une matrice et un vecteur
//SORTIE Un nouveau vecteur
vect prod(matrice mat, vect vecto)
{
    double matFin[3];

    for (int I = 0; I < 3; I++)
    {
        matFin[I] = 0;
    }

    for (int I = 0; I < 3; I++)
    {
        for (int J = 0; J < 3; J++)
        {
            matFin[0] += mat.Mmatrice[J][0] * vecto.dx;
            matFin[1] += mat.Mmatrice[J][1] * vecto.dy;
            matFin[2] += mat.Mmatrice[J][2] * vecto.dz;

        }
    }

    vect Vecteur0(matFin[0], matFin[1], matFin[2]);
    Vecteur0.affichageV();
    return Vecteur0;
}