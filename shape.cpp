#pragma once
#include "shape.h"
#include<string>
#include<iostream>
using namespace std;
shape::shape(string type,string col,float a)
{
	this->shapetype=type;

	this->colour=col;
}

shape::shape(string a)
{
	
	this->colour=a;
	this->shapetype="";
}
shape::shape()
{
	
	this->colour="";
	this->shapetype="";
}
float shape::area()
{
	cout<<"Area of shape invoked"<<endl;
	return 0.0;
}
shape::~shape()
{
	cout << "~shape() called."<<endl; 	
}
