#pragma once
#include "triangle.h"
#include<string>
#include<typeinfo>
#include<iostream>
triangle::triangle(float b,float h,string a)
{
	this->colour=a;
	this->base=b;
	this->height=h;
	this->shapetype=typeid(triangle).name();
}
float triangle::area()
{
		cout<<"Area of triangle invoked"<<endl;
	float pro=0.0;
	pro=this->base*this->height;
	pro=pro/2;
	return pro;
}
triangle::~triangle()
{ 
	cout << "~ triangle () called."<<endl;  
}




