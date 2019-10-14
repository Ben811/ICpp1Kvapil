#include "pch.h"
#include "DynamicObject.h"





DynamicObject::DynamicObject(int id) : Object(id)
{
}

DynamicObject::~DynamicObject()
{
}

void DynamicObject::setAngle(double x)
{
	if (x > 0 && x < 2*M_PI) {
		this->angle = x;
	}
	else {
		throw("setAngle err: out of angle");
	}
}

double DynamicObject::getAngle()
{
	return this->angle;
}
