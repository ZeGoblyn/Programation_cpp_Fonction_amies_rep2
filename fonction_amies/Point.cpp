#include<stdio.h>
#include<iostream>
#include"Point.h"

//BUT Construire un point
//ENTREE Deux int
//SORTIE Un point
Point::Point(int abs, int ord)
{
	this -> X = abs; 
	this -> Y = ord;
}