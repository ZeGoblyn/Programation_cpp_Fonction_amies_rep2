#pragma once

#include<stdio.h>
#include<iostream>

class vecteur3d
{
private:
	float x, y, z;

public:
	vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0);

	friend void coincide(vecteur3d& v1, vecteur3d& v2);
};