#pragma once
#include "shape.h"
#include<string>
class triangle :
	public shape
{

public:
	float area();
	triangle(float,float,string);
	~triangle();
private:
	float base;
	float height;
	

	
};

