#include <iostream>
#include <string>
#include "Circle.h"



void Circle::setCircle(string name, int radius)
{
	this->name = name;
	this->radius = radius;
}

double Circle::getArea()
{
	return radius * radius * 3.14;
}

string Circle::getName()
{
	return name;
}