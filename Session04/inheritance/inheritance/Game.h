#pragma once

#ifndef GAME_H
#define GAME_H

#include "Object.h"
#include "DynamicObject.h"



class Game
{
public:
	Game();
	~Game();

	//	Vlo�� objekt do pole.
	void InsertObject(Object* o);
	
	//Vr�t� pole id v�ech statick�ch objekt� v zadan�ch sou�adnic�ch.
	int* findIdOfStaticObject(double xmin, double xmax, double	ymin, double ymax);
	
	//Vr�t� pole ukazel� na pohybliv� objekty v kruhov� oblasti(S = [x, y], radius = r).
	DynamicObject** FindDynObjects(double x, double y, double r);
	
	//Viz p�edchoz�, nav�c kontrola �hlu nato�en�
	DynamicObject** FindDynObjects(double x, double y, double r, double umin, double umax);
	
private:
	Object** objects;
	int countOfObject;

};


#endif // !GAME_H
