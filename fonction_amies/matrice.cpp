#include<stdio.h>
#include<iostream>
#include"matrice.h"

//BUT Constructeur d'une matrice pré établit
//ENTREE Un tableau de double 
//SORTIE Une matrice de 3*3
matrice::matrice(double dbtab[3][3])
{
    for (int nI = 0; nI < 3; nI++)
    {
        for (int nJ = 0; nJ < 3; nJ++)
        {
            this->Mmatrice[nI][nJ] = dbtab[nI][nJ];
        }
    }
}

//BUT Constructeur de matrice par défaut
//ENTREE
//SORTIE une matrice par défaut
matrice::matrice()
{
    double nb = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Mmatrice[i][j] = ++nb;
        }
    }
}