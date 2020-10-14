#pragma once

#include<stdio.h>
#include<iostream>

class Point
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