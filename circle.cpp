#include "circle.h"
#include<iostream>

circle::circle(float r,string a)
{
	this->radius=r;
	this->colour=a;
	this->shapetype=typeid(circle).name();
}
float circle::area()
{
	float pro;
		cout<<"Area of circle invoked"<<endl;
	pro=this->radius*3.14*this->radius;
	return pro;
}
circle::~circle() 
{
	cout << "~ circle () called."<<endl;  	
}


