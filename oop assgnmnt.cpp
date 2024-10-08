/*
project name: Rectangle
Author: Qathra.H.
Date: 6th october 2024
*/
#include<iostream>
using namespace std;
class Rectangle
{
	public:
		double length;
		double width;
		       
		       public:
		       	   
		       	    double area()
		       	    {
		       	    	return length * width;
					}
					
					double perimeter()
					{
						return 2*(length+width);						
}

void display()
{
	cout<<"area of the Rectangle:"<<area()<<endl;
	cout<<"perimeter of the Rectangle:"<<perimeter()<<endl;
}

};


int main()
{
	Rectangle rect1;
	rect1.length=5.0;
	rect1.width=3.0;
	cout<<"Rectangle 1:"<<endl;
	rect1.display();
	
	Rectangle rect2;
	rect2.length=7.0;
	rect2.width=4.0;
	cout<<"Rectangle 2:"<<endl;
	rect2.display();
	
	
	return 0;
	
}
		       	   	    		     


