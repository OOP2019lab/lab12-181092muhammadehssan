#include<iostream>
using namespace std;
#include"triangle.h"
#include"circle.h"
#include "rectangle.h"
#include<conio.h>
float sumarea(shape *shape1,shape *shape2)
{
	float pro;
	pro=shape1->area()+shape2->area();


	return pro;
}
int main()
{
	triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area()<<endl;
	cout<<t1.colour<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;
	shape *sptr1= &t1;
	shape &sref=r1;
	cout<< sptr1->area()<<endl;
	cout<< sptr1->colour<<endl;
	cout<< sref.colour<<endl;
	cout<< sref.area()<<endl;
	shape s1("Purple");
	cout<<"************************************"<<endl<<endl;
	cout<<sumarea(&t1,&c1)<<endl;
	cout<<sumarea(&s1,&r1)<<endl;
	cout<<sumarea(&s1,&t1)<<endl;
	int count=1;
	shape **shapeArray=new shape *[5];
		float a=0,b=0;
		string c;
	for(int i=0; i<count;)
{
  	cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
  	switch (_getch())
  	{
		
        	case '1':
				
              
					cout<<"height is : "<cin>>a;
					cout<<"base is :";
					cin>>b;
					
					cout<<"colour is ";
					cin>>c;
					shapeArray[i]=new triangle(a,b,c);
					cout<<shapeArray[i]->area()<<endl;
              	    i++;
              	    break;
				
        	case '2':
              	
					cout<<"length is ";
					cin>>a;
					cout<<"width is ";
					cin>>b;
					cout<<"colour is ";
					cin>>c;
					shapeArray[i]=new rectangle(a,b,c);
				cout<<shapeArray[i]->area()<<endl;
                i++;
              	break;
				
        	case '3':
					
              	cout<<"Enter radius ";
				cin>>a;
				cout<<"Colour is ";
				cin>>c;
				shapeArray[i]=new circle(a,c);
				cout<<shapeArray[i]->area()<<endl;
                i++;
              	break;
				
   	 	default:
              	cout<<"Invalid input. Enter again." <<endl<<endl;
              	break;
}

	}
	shape *s2= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
delete s2; 
	for(int i=0;i<count;i++)
		delete shapeArray[i];
	delete [] shapeArray;


}