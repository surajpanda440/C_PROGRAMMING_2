//Write a C++ Program to find the Area and Perimeter of a Circle, Triangle, Square and Rectangle using functions.//
#include <iostream>
using namespace std;
int main()
{
	float l,b,h,area,perimeter,s,pi,r;
	pi=3.14;
	int ch;
	cout<<"1) to find area and perimeter of a tringale  ";
	cout<<"\n 2) to find area and perimeter of a circle";
	cout<<"\n 3) to find area and perimeter of a rectangale ";
	cout<<"\n 4) to find area and perimeter of a square ";
	cout<<"\n enter a number =";
	cin>>ch;
	if (ch<5)
	{
		switch(ch)
		{
			case 1:
				cout<<"enter the hight of the tringale = ";
				cin>>h;
				cout<<"\n enter the base of the tringele = ";
				cin>>b;
				perimeter=0.5*h*b;
				area=h*b;
				cout<<" \nthe area = "<<area;
				cout<<"\n the perimeter of the tringale = "<<perimeter;
				break;
			case 2:
				cout<<"enter the radious  of the circle  = ";
				cin>>r;
				area=pi*r*r;
				perimeter=2*pi*r;
				cout<<"\n the area of the circle ="<<area;
				cout<<"\n the perimeter of the circle ="<<perimeter;
				break;
			case 3:
				cout<<"enter the hight of the rectangle = ";
				cin>>h;
				cout<<"\n enter the base of the rectangle = ";
				cin>>b;
				perimeter=2*(h+b);
				area=h*b;
				cout<<"\n the area of the rectangle ="<<area;
				cout<<"\n the perimeter of the rectangle ="<<perimeter;
				break;
			case 4:
				cout<<"\n enter one side of the sqare =";
				cin>>s;
				area=s*s;
				perimeter=4*s;
				cout<<"\n the area of the square ="<<area;
				cout<<"\n the perimeter of the square ="<<perimeter;
				break;
				
				
		}
	}
	else{
		cout<<"\n pls enter as given instruction ";
		cout<<"\nenable to found any programme ";
		
	}
	
}
