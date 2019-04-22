#pragma once
#include<string>
using namespace std;
class shape
{
protected:
	string shapetype;
public:
	virtual float area();
	shape();
	shape(string);
	shape(string type,string colour,float a);
	string colour;
	~shape();

	
};

