#pragma once

#include<stdio.h>
#include<iostream>
#include"vect.h"

class vect;
class matrice
//BUT Création de la classe matrice et déclarations de ses constructeurs
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