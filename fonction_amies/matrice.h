#pragma once

#include<stdio.h>
#include<iostream>
#include"vect.h"

class vect;
class matrice
//BUT Cr�ation de la classe matrice et d�clarations de ses constructeurs
//ENTREE
//SORTIE
{
private:
    double Mmatrice[3][3];

public:
    //Constructeur
    matrice(double dblTab[3][3]);

    matrice();

    //Fonctions friend
    friend vect prod(matrice, vect);
};