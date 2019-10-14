#pragma once

#ifndef GAME_H
#define GAME_H

#include "Object.h"
#include "DynamicObject.h"



class Game
{
private:
	Object** objects;
	int countOfObject;

public:
	Game();
	~Game();

	//	Vlo�� objekt do pole.
	void insertObject(Object* o);
	
	int* findIdOfStaticObject(double xmin, double xmax, double	ymin, double ymax);
	//Vr�t� pole id v�ech statick�ch objekt� v zadan�ch sou�adnic�ch.
	DynamicObject** findDynObjects(double x, double y, double r);
	//Vr�t� pole ukazel� na pohybliv� objekty v kruhov� oblasti(S = [x, y], radius = r).
	DynamicObject** findDynObjects(double x, double y, double r, double umin, double umax);
	//Viz p�edchoz�, nav�c kontrola �hlu nato�en�
};


#endif // !GAME_H
