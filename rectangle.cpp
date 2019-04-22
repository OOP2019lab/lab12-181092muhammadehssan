#include "rectangle.h"
#include<iostream>

rectangle::rectangle(float h,float w,string a)
{
	this->height=h;
	this->width=w;
	this->colour=a;
	this->shapetype=typeid(rectangle).name();
}
float rectangle::area()
{
	float pro;
		cout<<"Area of rectangle invoked"<<endl;
	pro=this->height*this->width;
	return pro;
}
rectangle::~rectangle()
{ 
	cout << "~rectangle() called."<<endl;   
}




